#include <stdio.h>

int main() {
    int length, breadth;
    int i, j;

    printf("Enter length: ");
    scanf_s("%d", &length);
    printf("Enter breadth: ");
    scanf_s("%d", &breadth);

    for ( i = 1; i <= length; i++) {
        for ( j = 1; j <= breadth; j++) {
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}