#include <stdio.h>

int main() {
    int i;

    // Using a while loop
    printf("Using while loop:\n");
    i = 1;
    while (i <= 5) {
        if (i == 3) {
            i++; // Increment i to avoid an infinite loop
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    // Using a do-while loop
    printf("\nUsing do-while loop:\n");
    i = 1;
    do {
        if (i == 3) {
            i++; // Increment i to avoid an infinite loop
            continue;
        }
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    // Using a for loop
    printf("\nUsing for loop:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
