#include <stdio.h>

#define DEBUG_VAR(var) \
    printf("DEBUG - File: %s, Line: %d, Variable: %s = %d\n", __FILE__, __LINE__, #var, var);

int main() {
    int x = 42;
    int y = 10;

    DEBUG_VAR(x);
    DEBUG_VAR(y);

    return 0;
}
