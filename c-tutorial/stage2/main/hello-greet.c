/*
 * Build executable object file and cc_library example.
 *
 * Copyright Bazel organization
 *
 */

#include "main/hello-greet.h"

char *get_greet(char *hello, char *who) {
    char *str = malloc(strlen(hello) + strlen(who));

    strcat(str, hello);
    strcat(str, who);

    return str;
}

void print_hello_who(int argc, char** argv) {
    printf("%s\n", get_greet("Hello ", argc > 1 ? argv[1] : "world"));
}
