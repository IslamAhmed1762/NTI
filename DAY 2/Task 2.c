#include <stdio.h>

int main() {
    int customerNo, units;
    float charges = 0;

    printf("Enter customer number and units consumed:\n");
    scanf("%d %d", &customerNo, &units);

    if (units <= 200) {
        charges = units * 0.50;
    } else if (units <= 400) {
        charges = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        charges = 230 + (units - 400) * 0.80;
    } else {
        charges = 390 + (units - 600) * 1.00;
    }

    printf("Customer No: %d\n", customerNo);
    printf("Charges = %.2f\n", charges);

    return 0;
}