

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystr.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("error\n");
        return 1;
    }

    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("error\n");
        return 1;
    }

    strconcat(argv[1], argv[2]);
    printf("result is: %s\n", argv[1]);
    return 0;
}
