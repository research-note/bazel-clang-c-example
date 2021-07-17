/*
 * Build cc_library lib file example.
 *
 * Copyright Bazel organization
 *
 */

#include "lib/hello-time.h"

void print_localtime() {
    time_t now = time(&now);
    struct tm *ptm = gmtime(&now);

    if (ptm == NULL) {
        puts("The gmtime() function failed");
    }

    printf("UTC time: %s\n", asctime(ptm));
}
