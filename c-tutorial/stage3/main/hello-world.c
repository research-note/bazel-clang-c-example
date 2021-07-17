/*
 * Build executable object file liking with cc_library lib file example.
 *
 * Copyright Bazel organization
 *
 */

#include "lib/hello-time.h"
#include "main/hello-greet.h"

int main(int argc, char** argv) {

    print_hello_who(argc, argv);
    print_localtime();

    return 0;
}
