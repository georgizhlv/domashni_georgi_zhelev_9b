#include <stdio.h>
#define ARRAY_SIZE 5 

int main() {
#ifdef ARRAY_SIZE
    #if ARRAY_SIZE > 0 && ARRAY_SIZE < 11
        int arr[ARRAY_SIZE];
        

        for (int i = 0; i < ARRAY_SIZE; i++) {
            arr[i] = 1 << i; 
        }

        
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("Element %d: %d\n", i, arr[i]);
        }
    #else
        printf("Not a supported array size.\n");
    #endif
#else
    printf("ARRAY_SIZE not defined.\n");
#endif

    return 0;
}





 