#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[] = {2, 8, 15, 27, 64, 10, 125};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int k = 2;
    int k_cube = k * k * k;

    printf("search for numbers multiple of %d^3 (%d)...\n", k, k_cube);

    for (int i = 0; i < size; i++) {
        if (numbers[i] % k_cube == 0) {
            printf("find: %d\n", numbers[i]);
            printf("end.\n");
            return 0;
        }
    }

    printf(" No.\n", k);
    printf("END.\n");

    return 0;
}
