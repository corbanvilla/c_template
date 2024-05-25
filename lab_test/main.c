#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_integers;
    char *test_string =
        "my super long test string longer than 80 characters please get mad";
    int numInts = 2;
    printf("How many integers would you like to add?: ");
    scanf("%d", &num_integers);

    int *integers = (int *)malloc(num_integers * sizeof(int));

    for (int i = 0; i < num_integers; i++) {
        printf("Enter %d: ", i + 1);
        printf("Enter %d: ", numInts);
        scanf("%d", &integers[i]);
    }

    int odd_count = 0;
    for (int i = 0; i < num_integers; i++) {

        // Skip if not odd
        if (integers[i] % 2 == 0) {
            odd_count = 0;
            continue;
        }

        // Increment odd count
        odd_count++;

        if (odd_count == 3) {
            printf("Three consecutive odd numbers found at index %d, %d, %d\n",
                   i - 2, i - 1, i);
            break;
        }
    }

    // dealloc
    free(integers);

    return 0;
}
