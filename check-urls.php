<?php
/**
 * Script to check if all URLs Redirection is correctly setuped
 *
 *    Usage: php check-urls.php <testDomain> <checkOnlySection>
 */

$testDomain = isset($argv[1]) ? $argv[1] : 'staging.antistatique.net';

// Path to the XML WordPress export file
// To generate it: http://antistatique.net/blog/wp-admin/export.php
$wordPressExportFile = 'data/antistatiquenetblog.wordpress.2015-06-11.xml';

$urls = [
    'general' => [
        '/',
        '/fr/',
        '/fr/team',
        '/fr/contact',
        '/fr/portfolio',
        '/fr/job',
        '/fr/job/web-developer-drupal',
        '/en/job/web-developer-drupal',
    ],
    'portfolio' => [
        '/fr/portfolio/devenez',
        '/fr/portfolio/prateo',
        '/fr/portfolio/cardis',
        '/fr/portfolio/brouillondeculture',
        '/fr/portfolio/rodondijoye',
        '/fr/portfolio/pierreetoile',
        '/fr/portfolio/billetlemillion',
        '/fr/portfolio/courtierspartenaires',
        '/fr/portfolio/ehl',
        '/fr/portfolio/electrosanne',
        '/fr/portfolio/faceit',
        '/fr/portfolio/urturn',
        '/fr/portfolio/tennislausanne',
        '/fr/portfolio/derham',
        '/fr/portfolio/uchitomi',
        '/fr/portfolio/richter',
        '/fr/portfolio/tehran',
    ],
    'blog' => [
        '/blog/',
        '/blog/author/gde/',
        '/blog/author/ludovic/',
        '/blog/author/admin/', // marc
        '/blog/author/nsz/',
        '/blog/author/agz/',
        '/blog/author/toni/',

    ]
];

// get all the URL from WordPress
$urls['blog_posts'] = getBlogPostUrl($wordPressExportFile);

foreach($urls as $key => $section) {

    if (isset($argv[2]) && $argv[2] !== $key) {
        continue;
    }

    echo "\n=== $key ===\n";
    foreach($section as $url) {
        $url = 'http://' . $testDomain . $url;
        if (!checkUrl($url)) {
            echo $url . ' is not redirected'."\n";
        }
    }
}


//// Functions

function getBlogPostUrl($xmlFile) {

    if (!file_exists($xmlFile)) {
        throw new Exception('Error File "'.$xmlFile.'" does not exists !');
    }

    $xml = simplexml_load_file($xmlFile, null, LIBXML_NOCDATA);

    $urls = [];

    foreach($xml->channel->item as $item) {
        $link = (string) $item->link;
        $urls[] = str_replace('http://antistatique.net/', '/', $link);
    }

    return $urls;
}

function getHeaders($url) {
    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER , true);
    curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, 10);
    curl_setopt($ch, CURLOPT_HEADER, true);
    curl_setopt($ch, CURLOPT_CUSTOMREQUEST, 'HEAD');
    curl_setopt($ch, CURLOPT_NOBODY, true);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, false);

    $headers = curl_exec($ch);
    curl_close($ch);

    return $headers;
}

function getStatusCode($url) {
    $headers = getHeaders($url);
    $status = 0;

    // extract the status code
    if (preg_match('#HTTP/1.(?:0|1) ([0-9]{3})#', $headers, $matches)) {
        $status = (int) $matches[1];
    }

    // follow redirection
    if ($status == 301 || $status == 302) {
        if (preg_match('#Location: (.*)#', $headers, $matches)) {
            $status = getStatusCode($matches[1]);
        }
    }

    return $status;
}

function checkUrl($url) {
    $status = getStatusCode($url);
    if ($status == 200 /*|| $status == 301 || $status == 302*/) {
        return true;
    }

    return false;
}
