#include <stdio.h>
#include <string.h>
#include "bms.h"

void registerUser() {
    FILE *fp = fopen("users.txt", "a");
    char username[50], password[50];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    fprintf(fp, "%s %s\n", username, password);
    fclose(fp);

    printf("Registration successful!\n");
}

int login() {
    FILE *fp = fopen("users.txt", "r");
    char username[50], password[50];
    char u[50], p[50];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    while (fscanf(fp, "%s %s", u, p) != EOF) {
        if (strcmp(username, u) == 0 && strcmp(password, p) == 0) {
            fclose(fp);
            printf("Login successful!\n");
            return 1;
        }
    }

    fclose(fp);
    printf("Invalid login!\n");
    return 0;
}