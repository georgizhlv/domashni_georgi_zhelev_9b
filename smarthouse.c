#include <stdio.h>
#include <stdint.h>

void switch_light(uint8_t *state, int room) {
    if (room < 1 || room > 8) {
        printf("enter a number between 1 and 8.\n");
        return;
    }
    *state ^= (1 << (room - 1));
}

void print_state(uint8_t state) {
    int found = 0;
    for (int i = 0; i < 8; i++) {
        if (state & (1 << i)) {
            printf("%d ", i + 1);
            found = 1;
        }
    }
    if (!found) {
        printf("nqma");
    }
    printf("\n");
}

int main() {
    uint8_t house_state = 0; 
    int choice;
    
    while (1) {
        printf("\nSmart House Menu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Vuvedi izbor: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int room;
            printf("Enter the room number (1-8): ");
            scanf("%d", &room);
            switch_light(&house_state, room);
        } else if (choice == 2) {
            print_state(house_state);
        } else if (choice == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
