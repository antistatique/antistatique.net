---
title: Navbar
name: navbar
collection: molecules
notes: |
  Our navbar
---
<div class="navbar navbar-default">
  <div class="navbar-header">
    <a class="logo navbar-btn navbar-brand pull-left hidden-xs hidden-sm" href="/fr" title="Home">
      <img src="{{data.path}}build/svg/logo.svg" alt="Antistatique" />
    </a>
    <a class="logo navbar-btn navbar-brand pull-left visible-xs-inline-block visible-sm-inline-block" href="/fr" title="Home">
      <img src="{{data.path}}build/svg/A-logo.svg" alt="Antistatique" />
    </a>

    <a href="/fr/nous/travaillons/avec/vous" type="button" class="pull-right btn btn-primary navbar-btn visible-xs">
      <i class="fa fa-paper-plane"></i>
      <span class="sr-only">Contact</span>
    </a>

    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
      <span class="sr-only">Toggle navigation</span>
      <div class="inline-block">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </div>
      Menu
    </button>
  </div>

  <div class="navbar-collapse navbar-mobile collapse">
    <nav role="navigation">
      <a href="#" class="visible-xs-block logo"><span class="sr-only">Antistatique</span></a>
      <ul class="menu nav navbar-nav">
        <li class="active-trail"><a href="#" title="" class="active-trail">Nous</a></li>
        <li><a href="#">Travaillons</a></li>
        <li><a href="#">Avec vous</a></li>
      </ul>
      <div class="navbar-right">
        <div class="nav navbar-btn inline-block">
          <a href="#" class="btn btn-primary">Nous contacter</a>
        </div>
        <div class="nav navbar-btn inline-block">
          <div class="btn-group-vertical lang-switcher"><a href="#" class="btn btn-gray btn-xxs text-uppercase active">fr</a><a href="#" class="btn btn-gray btn-xxs text-uppercase">en</a></div>
        </div>
      </div>
    </nav>
    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
      <span class="sr-only">Close navigation</span>
      <span class="h3">×</span>
      Menu
    </button>
  </div>
</div>
