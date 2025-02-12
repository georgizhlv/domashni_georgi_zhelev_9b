#include <stdio.h>
#include <stdlib.h>
#include "transformation.h"
void main(){
const char* valid = "593";
const char* invalid = "1c2a24";
transformation result1 = string_to_number(valid);
    if(result1.error[0] = '\0'){
        printf("\"%s\" => Resultat %ld\n", valid, result1.result);
}
    else {
        printf("\"%s\" => Greshka %s\n", valid, result1.error);
}
transformation result2 = string_to_number(invalid);
    if (result2.error[0] == '\0') {
        printf(" \"%s\" => Resultat %ld\n", invalid, result2.result);
} 
    else {
        printf("\"%s\" => Greshka %s\n", invalid, result2.error);
}
}