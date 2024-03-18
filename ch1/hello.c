#include <stdio.h>
#include <stdlib.h>
int main(void) {
    if (printf("%s\n", "Hello, world!") > 0) {
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}