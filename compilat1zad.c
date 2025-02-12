#include <stdio.h>

#define DEBUG  
void sortAndSum(int arr[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
        }
    }

#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
#endif

    printf("Sum of elements at indexes divisible by 3: %d\n", sum);
}

int main() {
    int arr[] = {5, 3, 8, 1, 2, 7, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortAndSum(arr, n);

    return 0;
}
