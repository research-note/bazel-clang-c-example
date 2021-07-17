/*
 * Build only executable object file example.
 *
 * Copyright Bazel organization
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *get_greet(char *hello, char *who) {
    char *str = malloc(strlen(hello) + strlen(who));

    strcat(str, hello);
    strcat(str, who);

    return str;
}

void print_hello_who(int argc, char** argv) {
    printf("%s\n", get_greet("Hello ", argc > 1 ? argv[1] : "world"));
}

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
