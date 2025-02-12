#include <stdio.h>

int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nok(int a, int b) {
    return (a * b) / nod(a, b);
}

int main() {
    int a = 12, b = 18;
    
    printf("NOK na %d i %d e: %d\n", a, b, nod(a, b));
    return 0;
}
