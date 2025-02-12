#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf(%s, argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    SafeResult result = safemultiply(num1, num2);

    if (result.errorflag) {
        printError("Greshka(over ili under flow)");
    } else {
        printf("%d\n", result.value);
    }

    return 0;
}
