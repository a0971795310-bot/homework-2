#include <stdio.h>

int main() {
    int account;
    double beginning_balance, charges, credits, credit_limit, new_balance;

    while (1) {
        printf("Enter account number (-1 to end): ");
        scanf_s("%d", &account);
        if (account == -1) break;

        printf("Enter beginning balance: ");
        scanf_s("%lf", &beginning_balance);

        printf("Enter total charges: ");
        scanf_s("%lf", &charges);

        printf("Enter total credits: ");
        scanf_s("%lf", &credits);

        printf("Enter credit limit: ");
        scanf_s("%lf", &credit_limit);

        new_balance = beginning_balance + charges - credits;

        if (new_balance > credit_limit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", credit_limit);
            printf("Balance:      %.2f\n", new_balance);
            printf("Credit Limit Exceeded.\n");
        }
        printf("\n");
    }

    return 0;
}