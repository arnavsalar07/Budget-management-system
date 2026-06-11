#include <stdio.h>
#include "bms.h"

void inputBudget(struct Budget *b) {
    printf("Enter total trip budget: ");
    scanf("%f", &b->total);

    printf("Enter number of days: ");
    scanf("%d", &b->days);

    b->hotel = 0;
    b->shopping = 0;
    b->travel = 0;
    b->food = 0;
}

void addExpense(struct Budget *b) {
    int choice;
    float amount;

    printf("\n1. Hotel\n2. Shopping\n3. Travel\n4. Food\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1)
        b->hotel += amount;
    else if (choice == 2)
        b->shopping += amount;
    else if (choice == 3)
        b->travel += amount;
    else if (choice == 4)
        b->food += amount;
    else
        printf("Invalid choice!\n");

    float totalSpent = b->hotel + b->shopping + b->travel + b->food;

    if (totalSpent > b->total)
        printf("⚠ Budget exceeded!\n");
    else if (totalSpent > 0.8 * b->total)
        printf("⚠ Warning: Near budget limit!\n");
}