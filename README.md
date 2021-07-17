# Bazel clang c example

Here is the summary of what I learned while using bazel build system with C & clang 12.

I have build on WSL2 ubuntu 20.04 with Clang-12 Compiler.

## Build

Build with Clang-12.

```console
foo@bar:c-tutorial/stage1$ bazel build --config=clang_config  //main:hello-world
```

## Test

Test with [uftrace](https://github.com/namhyung/uftrace) and [valgrind](https://sourceware.org/git/valgrind.git).

Install uftrace and valgrind in ubuntu.

```console
foo@bar:~$ sudo apt -y install uftrace valgrind
```

### uftrace

Test hello-world program with uftrace in terminal.

```console
foo@bar:c-tutorial/stage1$ uftrace ./bazel-bin/main/hello-world
```
### valgrind

Test hello-world program with valgrind in terminal.

```console
foo@bar:c-tutorial/stage1$ valgrind ./bazel-bin/main/hello-world
```

## lint

Install [cpplint](https://github.com/cpplint/cpplint).

```console
foo@bar:~$ sudo apt -y install python3  && pip install cpplint
foo@bar:~$ echo "export PATH=\$PATH:\$HOME/.local/bin" >> .bashrc && source .bashrc
```

And do lint.

```console
foo@bar:c-tutorial/stage1$ cpplint main/hello-world.c
```

# Reference

[Installing Bazel on Ubuntu](https://docs.bazel.build/versions/main/install-ubuntu.html)

[Bazel Tutorial: Build a C++ Project](https://docs.bazel.build/versions/main/tutorial/cpp.html)

[Bazel Tutorial: Configure C++ Toolchains](https://docs.bazel.build/versions/main/user-manual.html)

[Bazel command line options](https://docs.bazel.build/versions/main/user-manual.html)
