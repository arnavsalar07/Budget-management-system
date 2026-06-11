#include <stdio.h>
#include "bms.h"

void showReport(struct Budget b) {
    float totalSpent = b.hotel + b.shopping + b.travel + b.food;
    float remaining = b.total - totalSpent;

    printf("\n------ Trip Report ------\n");

    printf("Hotel: %.2f\n", b.hotel);
    printf("Shopping: %.2f\n", b.shopping);
    printf("Travel: %.2f\n", b.travel);
    printf("Food: %.2f\n", b.food);

    printf("Total Spent: %.2f\n", totalSpent);
    printf("Remaining Budget: %.2f\n", remaining);

    if (b.days > 0)
        printf("Average per day: %.2f\n", totalSpent / b.days);
    else
        printf("Invalid number of days!\n");
}