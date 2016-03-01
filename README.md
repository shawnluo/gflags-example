Overview
--------

This is an example C++ project which uses the gflags library for the parsing of
the command-line flags. It demonstrates the use of either [Bazel](http://bazel.io/)
or [CMake](https://cmake.org/) for the build of the project where the source code
of the gflags library is optionally directly included in the example project's
source tree using the [Git submodule command](https://git-scm.com/docs/git-submodule).
When the submodule is not initialized, an external installation of the gflags
library is required instead.
