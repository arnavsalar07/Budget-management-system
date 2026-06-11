#include <stdio.h>
#include "bms.h"

int main() {
    int choice;
    struct Budget b;

    printf("1. Register\n2. Login\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        registerUser();
    }

    if (login()) {
        inputBudget(&b);

        int option;
        do {
            printf("\n1. Add Expense\n2. Show Report\n3. Exit\n");
            printf("Enter option: ");
            scanf("%d", &option);

            if (option == 1)
                addExpense(&b);
            else if (option == 2)
                showReport(b);

        } while (option != 3);
    }

    return 0;
}