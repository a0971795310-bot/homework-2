#include <stdio.h>

int main() {
    double principal, rate, interest;
    int days;

    while (1) {
        printf("Enter loan principal (-1 to end): ");
        scanf_s("%lf", &principal);
        if (principal == -1.0) break;

        printf("Enter interest rate: ");
        scanf_s("%lf", &rate);

        printf("Enter term of the loan in days: ");
        scanf_s("%d", &days);

        interest = principal * rate * days / 365.0;
        printf("The interest charge is $%.2f\n\n", interest);
    }

    return 0;
}