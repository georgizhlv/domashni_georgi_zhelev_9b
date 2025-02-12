#include <stdio.h>
#include <math.h>

void chetvurtaStepen(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (long)pow(arr[i], 4);
    }
}

int main() {
    long arr[] = {4, 2, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    chetvurtaStepen(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }

    return 0;
}
