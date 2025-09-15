#include <stdio.h>
#include <stdlib.h>


int find_mul(int numbers[], int size, int k) {
    int k_cube = k * k * k;
    printf("search numbers %d^3 (%d)...\n", k, k_cube);
    for (int i = 0; i < size; i++) {
        if (numbers[i] % k_cube == 0) {
            printf("Find: %d\n", numbers[i]);
            return 1;
        }
    }
    printf("No.\n", k);
    return 0;
}

int main() {
    int numbers[] = {2, 8, 15, 27, 64, 10, 125};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int k = 10;


    int found = find_mul(numbers, size, k);

    printf("END.\n");
    return found;
}
