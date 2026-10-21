#include <stdio.h>

int main() {
    int paycode;

    while (1) {
        printf("Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
        scanf_s("%d", &paycode);
        if ( paycode == -1) break;

        switch (paycode) {
        case 1: { // 經理
            double weekly_salary;
            printf("Enter weekly salary: ");
            scanf_s("%lf", &weekly_salary);
            printf("Manager's pay is $%.2f\n\n", weekly_salary);
            break;
        }
        case 2: { // 時薪工
            double hours, rate, pay;
            printf("Enter hourly rate: ");
            scanf_s("%lf", &rate);
            printf("Enter hours worked: ");
            scanf_s("%lf", &hours);
            if (hours <= 40.0) {
                pay = hours * rate;
            }
            else {
                pay = 40.0 * rate + (hours - 40.0) * rate * 1.5;
            }
            printf("Hourly worker's pay is $%.2f\n\n", pay);
            break;
        }
        case 3: { // 佣金工
            double gross_sales, pay;
            printf("Enter gross weekly sales: ");
            scanf_s("%lf", &gross_sales);
            pay = 250.0 + gross_sales * 0.057;
            printf("Commission worker's pay is $%.2f\n\n", pay);
            break;
        }
        case 4: { // 按件計酬工
            double price_per_item, pay;
            int items;
            printf("Enter price per item: ");
            scanf_s("%lf", &price_per_item);
            printf("Enter number of items produced: ");
            scanf_s("%d", &items);
            pay = price_per_item * items;
            printf("Pieceworker's pay is $%.2f\n\n", pay);
            break;
        }
        default:
            printf("Invalid paycode.\n\n");
            break;
        }
    }

    return 0;
}