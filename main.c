#include <stdio.h>
#include <stdlib.h>


int find_mul(int numbers[], int size, int k) {
    int k_cube = k * k * k; int tmp= 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] % k_cube == 0) {

            tmp=1;
        }
    }
    return tmp;
}

int main() {
    int numbers[] = {2, 8, 15, 27, 64, 10, 125};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int k = 5;


    int found = find_mul(numbers, size, k);

    switch (found) {
        case 1:
            printf("Found  %d^3 (%d).\n", k, k * k * k);
            break;
        case 0:
            printf("No %d^3 (%d) found.\n", k, k * k * k);
            break;
    }

    printf("END.\n");
    return found;
}
