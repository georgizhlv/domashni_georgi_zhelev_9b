#include <stdio.h>
#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) \
void COMMAND(NAME, TYPE)(void){\
printf(#NAME "of type:" #TYPE "exedcuted.\n");\
}
DEFINE_COMMAND(quit, internal);
DEFINE_COMMAND(quit, external);
void main(){
    COMMAND(quit, internal)();
    COMMAND(quit, external)();
}