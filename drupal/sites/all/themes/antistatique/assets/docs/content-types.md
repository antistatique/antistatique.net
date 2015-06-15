## Article

| Field | Type | Full | Teaser | Required | Comment |
|-------|------|:----:|:------:|:--------:|---------|
| title | text | ✔︎ | ✔︎ | Yes | max 128 caractères |
| hero-image | image | ✔︎ | ✔︎ | Yes | paysage - min 1500 px de large - random pattern si pas d'upload ou HEX |
| date | date | ✔︎ | ✔︎ | Yes | auto (publication date) format 26 janvier 2015 / January, 26th 2015 ou 3 days ago pour le teaser |
| body | body + excerpt | ✔︎ | | Yes |
| images | image (multiple) | ✔︎ | | | —> Images to insert in body |
| category | Term Reference (max 3) | ✔︎ | ✔︎ | Yes | basé sur la liste des catégories (read, listen, talk, socialize, etc.) |
| author | default option | ✔︎ | ✔︎ | Yes | |
| promoted to front page | default option | | | Yes | |

### To also be displayed

| Thing | Full | Teaser | Comment |
|-------|:----:|:------:|---------|
| Comment count | ✔︎ | ✔︎ | based on Disqus |
| Related articles | ✔︎ | | views to display the different  |

## Basic Page

| Field | Type | Full | Teaser | Required | Comment |
|-------|------|:----:|:------:|:--------:|---------|
| title | text | ✔︎ | ✔︎ | Yes | max 128 caractères |
| hero-image | image | ✔︎ | ✔︎ | Yes | paysage - min 1500 px de large - random pattern si pas d'upload ou HEX |
| date | date | ✔︎ | ✔︎ | Yes | auto (publication date) format 26 janvier 2015 / January, 26th 2015 ou 3 days ago pour le teaser |
| body | body + excerpt | ✔︎ | | Yes |
| images | image (multiple) | ✔︎ | | | —> Images to insert in body |
| category | Term Reference (max 3) | ✔︎ | ✔︎ | Yes | basé sur la liste des catégories (read, listen, talk, socialize, etc.) |
| promoted to front page | default option | | | Yes | |

## Product

https://projects.invisionapp.com/d/main#/console/1442313/54654736/preview

### Fields

| Field | Type | Full | Teaser | Required | Comment |
|-------|------|:----:|:------:|:--------:|---------|
| title | text | ✔︎ | ✔︎ | Yes | max 128 caractères |
| price | decimal | ✔︎ | ✔︎ | Yes | Currency + decimal (CHF 39.- ou 29,99 €)  see comment **1**|
| main image | image | ✔︎ | ✔︎ | Yes | PNG carré (min. 256px) |
| manufacturer name | text | ✔︎ | | | nom du fabricant / éditeur / auteur / etc. |
| manufacturer url | link | ✔︎ | | | site du fabricant / éditeur / auteur / etc. |
| retailer name | text | ✔︎ | | | |
| retailer url | link |✔︎ | | | |
| short description | text | ✔︎ | | | max. 250 caractères |
| retailer product url | link | ✔︎ | | | lien (d'affiliation) vers le produit chez le vendeur |
| curator | Entity Reference | ✔︎ | | | Personne de l'agence qui a fait cette sélection |
| long description | text | ✔︎ | | | Description plus complète du "pourquoi" je vous propose ce produit/service/objet/etc. |
| product images | image (max 3) | ✔︎ | | | PNG |

### Questions

- **1** – is it possible in Drupal to choose the currency at this moment? And display it before or after number?

## Project


https://projects.invisionapp.com/d/main#/console/1442313/54654756/preview

### Fields

| Field | Type | Full | Teaser | Required | Comment |
|-------|------|:----:|:------:|:--------:|---------|
| title | text | ✔︎ | ✔︎ | Yes | max 128 caractères |
| hero-image | image | ✔︎ | ✔︎ | Yes | paysage - min 1500 px de large - random pattern si pas d'upload ou HEX |
| client | Entity Reference | ✔︎ | ✔︎ | Yes | See comment **1** |
| company name | text | ✔︎ | ✔︎ | Yes | |
| company logo | image | ✔︎ | ✔︎ | Yes | Carré - min 256 px - upload SVG et PNG |
| services | Entity Reference | ✔︎ | | Yes | basé sur les services level 1 (stratégie, design, tech, etc.) See comment **2** |
| skills | Term Reference | ✔︎ | | Yes | basé sur les services level 1 (stratégie, design, tech, etc.) |
| URL | Link (multiple) | ✔︎ | | Yes | URL site ou Store d'app — plusieurs URL possibles|
| year | date | ✔︎ | ✔︎ | Yes | |
| body | body + excerpt | ✔︎ | | Yes |
| images | image (multiple) | ✔︎ | | | —> Images to insert in body |
| testimonial name | text | ✔︎ | | | Nom du contact chez le client |
| testimonial position | text | ✔︎ | | | Nom du poste du contact |
| testimonial quote | text | ✔︎ | | | Citation entre “ ” |
| testimonial avatar | image | ✔︎ | | | Carré - min 256 px|
| category | Term Reference (max 3) | ✔︎ | ✔︎ | Yes | basé sur la liste des catégories (read, listen, talk, socialize, etc.) |
| promoted to front page | default option | | | Yes | |
| Stick to the top | default option | | | | Sera en haut de liste page projet |

### Questions

- **1** – What about the client? Does he have a page? Otherwise, just a Link field or Text field would be enough. Or Term reference to be able to display a related view in an article for example?
- **2** – Service content type? Basic Page?

### To also be displayed

| Thing | Full | Teaser | Comment |
|-------|:----:|:------:|---------|
| More projects | ✔︎ | | views based on skills / services ? |

## Teammate

Our team is composed with teammates. Yes.

### Fields

| Field | Type | Full | Teaser | Tiny | Required | Comment |
|-------|------|:----:|:------:|:----:|:--------:|---------|
| First Name | Text | ✔ | ✔ | ✔ | Yes | |
| Last Name | Text | ✔ | ✔ | | Yes | |
| Job Title | Text | ✔ | ✔ | | Yes | |
| Email | Email | ✔ | | | Yes | |
| Hero Image | Image | ✔ | | | Yes | |
| Avatar Image | Image | ✔ | ✔ | ✔ | Yes | |
| Body + Excerpt | Body | ✔ | | | Yes | Biography (short) |
| Images | Image (4) | ✔ | | | Yes | see comment 1 below |
| Links | List text (unlimited) | ✔ | | | | List with service links (Twitter, Github...)|
| Ping Pong Ranking | Integer | ✔ | | | | |
| Currently Working | boolean | | | | | If not, will not be displayed, but will stay as article author |
| Stick at the top | default option | | | | | Alberto + Marc + Gilles at the top! (cf comment 2 below) |

### Comments

- **#1** – First image will be formatted as a big one, two next small Instagram-style, and the fourth is again bigger. [see example](https://projects.invisionapp.com/d/main#/console/1442313/54654724/preview)
- **#2** – We could create a custom ordering view (cf AISTS) to set the order and have more control over this (Juniors at the end, same jobs together)

### To also be displayed

| Thing | Full | Teaser | Comment |
|-------|:----:|:------:|---------|
| Related Projects | ✔︎ | | Based on Main Job |
| All the teammates | ✔ | | Except current |
