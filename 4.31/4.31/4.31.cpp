#include <stdio.h>

int main() {
    int total_rows = 9;
    int mid = total_rows / 2; 

    for (int i = 0; i < total_rows; i++) {
        int spaces = (i <= mid) ? (mid - i) : (i - mid);
        int stars = (i <= mid) ? (2 * i + 1) : (2 * (total_rows - 1 - i) + 1);

        
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}