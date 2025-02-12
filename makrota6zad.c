#include <stdio.h>

#define SWAP(a, b, TYPE) \
    do {                 \
        TYPE temp = a;   \
        a = b;           \
        b = temp;        \
    } while (0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE)             \
    do {                                             \
        for (int i = 0; i < SIZE - 1; i++) {         \
            for (int j = i + 1; j < SIZE; j++) {     \
                if (ARRAY[i] COMPARE ARRAY[j]) {     \
                    SWAP(ARRAY[i], ARRAY[j], TYPE);  \
                }                                    \
            }                                        \
        }                                            \
    } while (0)

void main() {
    int array[] = {7, 2, 9, 1, 6};
    int size = sizeof(array) / sizeof(array[0]);

    SORT(array, size, int, >);
    printf("Vuzhodqsht: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    SORT(array, size, int, <);
    printf("Nizhodqsht: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

}
