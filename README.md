What is ToyCoin?
----------------
http://toyco.in

ToyCoin is an experimental digital currency that enables instant payments to
anyone, anywhere in the world. ToyCoin (or more commonly toycoin) uses peer-to-peer 
technology to operate without a central authority or third party clearing-house.

Much like other popular Cryptocurrencies, ToyCoin offers a similar set of features.
Where ToyCoin differs is in the implementation of Colin Percival's Scrypt algorithm
as opposed to the more common SHA-256 novel hash algorithm. 

For more information, as well as an immediately useable, binary version of
the toycoin Core software, see [http://toyco.in](http://toyco.in).

License
-------

toycoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/toycoin-project/toycoin/tags) are created
regularly to indicate new official, stable release versions of toycoin Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).


### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`


### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

