#include <stdio.h>

int main() {
    int i;

    printf("------- Library Catalog -------\n\n");

    // Loop from 1 to 50
    for (i = 1; i <= 50; i++) {
        if (i % 5 == 0) {
            // Every 5th book
            printf("Book ID: %d (Special Edition)\n", i);
        } else {
            printf("Book ID: %d\n", i);
        }
    }

    return 0;
}
