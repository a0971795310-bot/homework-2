#include <stdio.h>

int main() {
    double sales, salary;

    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%lf", &sales);
        if (sales == -1.0) break;

        salary = 200.00 + sales * 0.09;
        printf("Salary is: $%.2f\n\n", salary);
    }

    return 0;
}