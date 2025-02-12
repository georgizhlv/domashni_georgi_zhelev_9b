#include <stdio.h>
#define SUM(A, B) ((A) + (B)) * ((A) + (B))
int main() {
    int a = 3, b = 4;
    int result = SUM(a, b);

    printf("%d\n",result);

    return 0;
}