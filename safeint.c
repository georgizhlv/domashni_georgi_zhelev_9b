#include "safeint.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

SafeResult safeadd(int a, int b) {
    SafeResult result;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = a + b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = a - b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    if (a > 0 && b > 0 && a > INT_MAX / b) {
        result.value = 0;
        result.errorflag = 1;
    } else if (a > 0 && b < 0 && b < INT_MIN / a) {
        result.value = 0;
        result.errorflag = 1;
    } else if (a < 0 && b > 0 && a < INT_MIN / b) {
        result.value = 0;
        result.errorflag = 1;
    } else if (a < 0 && b < 0 && a < INT_MAX / b) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = a * b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b == 0 || (a == INT_MIN && b == -1)) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safestrtoint(const char* str) {
    SafeResult result;
    result.value = 0;
    result.errorflag = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            result.errorflag = 1;  
            return result;
        }

        SafeResult temp = safemultiply(result.value, 10);
        if (temp.errorflag) {
            result.errorflag = 1;  
            return result;
        }

        SafeResult addResult = safeadd(temp.value, str[i] - '0');  
        if (addResult.errorflag) {
            result.errorflag = 1;  

        result.value = addResult.value;
    }

    return result;
}
