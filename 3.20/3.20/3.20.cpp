#include <stdio.h>

int main() {
    double hours, rate, salary;

    while (1) {
        printf("Enter how much hours worked (-1 to end): ");
        scanf_s("%lf", &hours);
        if (hours == -1.0) break;

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf_s("%lf", &rate);

        if (hours <= 40.0) {
            salary = hours * rate;
        }
        else {
            salary = 40.0 * rate + (hours - 40.0) * rate * 1.5;
        }

        printf("Salary is $%.2f\n\n", salary);
    }

    return 0;
}