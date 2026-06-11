#ifndef BMS_H
#define BMS_H

struct Budget {
    float total;
    float hotel;
    float shopping;
    float travel;
    float food;
    int days;
};

void registerUser();
int login();

void inputBudget(struct Budget *b);
void addExpense(struct Budget *b);

void showReport(struct Budget b);

#endif