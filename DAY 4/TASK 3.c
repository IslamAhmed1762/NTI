#include <stdio.h>

int multiply_with_operator(int x, int y) {
    return x * y;
}

int multiply_with_addition(int x, int y) {
    int product = 0;
    for (int i = 0; i < y; i++) {
        product += x;
    }
    return product;
}

int main(void) {
    int first_number = 0;
    int second_number = 0;

    printf("Enter first number: ");
    scanf("%d", &first_number);

    printf("Enter second number: ");
    scanf("%d", &second_number);

    int product_operator = multiply_with_operator(first_number, second_number);
    int product_addition = multiply_with_addition(first_number, second_number);

    printf("Product using operator: %d\n", product_operator);
    printf("Product using addition: %d\n", product_addition);

    return 0;
}