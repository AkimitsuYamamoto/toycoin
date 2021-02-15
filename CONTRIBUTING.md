Contributing to ToyCoin Core
============================

The ToyCoin Core project operates an open contributor model where anyone is
welcome to contribute towards development in the form of peer review, testing
and patches. This document explains the practical process and guidelines for
contributing.


Contributor Workflow
--------------------

The codebase is maintained using the "contributor workflow".

To contribute a patch, the workflow is as follows:

  - Fork repository
  - Create topic branch
  - Commit patches

The project coding conventions in the [developer notes](doc/developer-notes.md)
must be adhered to.

Please refer to the [Git manual](https://git-scm.com/doc) for more information
about Git.

  - Push changes to your fork
  - Create pull request


Pull Request Philosophy
-----------------------

Patchsets should always be focused. For example, a pull request could add a
feature, fix a bug, or refactor code; but not a mixture. Please also avoid super
pull requests which attempt to do too much, are overly large, or overly complex
as this makes review difficult.


### Features

When adding a new feature, thought must be given to the long term technical debt
and maintenance that feature may require after inclusion. Before proposing a new
feature that will require maintenance, please consider if you are willing to
maintain it (including bug fixing). If features get orphaned with no maintainer
in the future, they may be removed by the Repository Maintainer.


Release Policy
--------------

The project leader is the release manager for each toycoin Core release.

Copyright
---------
Copyright 2021 The toycoin Core Developers

- Mr. Akimitsu Yamamoto (c) 2021

