/*
 * Build executable object file and cc_library example.
 *
 * Copyright Bazel organization
 *
 */

#ifndef C_TUTORIAL_STAGE2_MAIN_HELLO_GREET_H_
#define C_TUTORIAL_STAGE2_MAIN_HELLO_GREET_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_greet(char *hello, char *who);

void print_hello_who(int argc, char** argv);

#endif  // C_TUTORIAL_STAGE2_MAIN_HELLO_GREET_H_
