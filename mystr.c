#include "mystr.h"
#include <string.h>

int strlength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void strconcat(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int strcompare(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    if (*str1 < *str2) {
        return -1;
    } else if (*str1 > *str2) {
        return 1;
    } else {
        return 0;
    }
}
