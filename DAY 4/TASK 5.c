#include <stdio.h>

void calculateDivisionAndRemainder(int dividend, int divisor, int *quotient, int *remainder) {
    if (divisor != 0) {
        *quotient = dividend / divisor;
        *remainder = dividend % divisor;
    } else {
        *quotient = 0;
        *remainder = 0;
    }
}

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter the dividend: ");
    if (scanf("%d", &dividend) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the divisor: ");
    if (scanf("%d", &divisor) != 1 || divisor == 0) {
        printf("Invalid or zero divisor.\n");
        return 1;
    }

    calculateDivisionAndRemainder(dividend, divisor, &quotient, &remainder);

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}