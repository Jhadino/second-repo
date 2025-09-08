#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[] = {2, 8, 15, 27, 64, 10, 125};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int k = 3;
    int k_cube = k * k * k;
    
    printf("Поиск чисел, кратных %d^3 (%d)...\n", k, k_cube);
    
    for (int i = 0; i < size; i++) {
        if (numbers[i] % k_cube == 0) {
            printf("Найдено: %d\n", numbers[i]);
            printf("Программа завершена.\n");
            return 0; 
        }
    }
 
    printf("Чисел, кратных %d^3, не найдено.\n", k);
    printf("Программа завершена.\n");
    
    return 0;
}