#include <stdio.h>

int main() {
    // Pattern (A)
    printf("(A)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    printf("\n");

    // Pattern (B)
    printf("(B)\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    printf("\n");

    // Pattern (C)
    printf("(C)\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= 10 - i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    printf("\n");

    // Pattern (D)
    printf("(D)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10 - i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    return 0;
}