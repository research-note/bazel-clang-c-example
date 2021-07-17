/*
 * Build executable object file and cc_library example.
 *
 * Copyright Bazel organization
 *
 */

#include <stdio.h>
#include <time.h>

#include "main/hello-greet.h"

void print_localtime() {
    time_t now = time(&now);
    struct tm *ptm = gmtime(&now);

    if (ptm == NULL) {
        puts("The gmtime() function failed");
    }

    printf("UTC time: %s\n", asctime(ptm));
}

int main(int argc, char** argv) {

    print_hello_who(argc, argv);
    print_localtime();

    return 0;
}

