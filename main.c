#include <stdio.h>
#include "processes.h"

int main() {
    add_process("Process 1");
    add_process("Process 2");
    add_process("Process 3");
    add_process("Process 4");
    add_process("Process 5");
    add_process("Process 6");  
    printf("\nlist:\n");
    for (int i = 0; i < processescount; i++) {
        printf("ID: %d, Ime: %s\n", processes[i].id, processes[i].name);
    }

    return 0;
}
