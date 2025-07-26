#include <stdio.h>

int main() {
    unsigned int num1 = 0;
    unsigned int num2 = 0;

    printf("Enter Number 1: ");
    scanf("%u", &num1);

    printf("Enter Number 2: ");
    scanf("%u", &num2);

    printf("--------------------------\n");
    printf("Addition:        %u\n", num1 + num2);
    printf("Subtraction:     %u\n", num1 - num2);
    printf("Multiplication:  %u\n", num1 * num2);
    //DIVID RESULT 3 Numbers after point استعملت هنا ال0.3f  (float)
    printf("Division:        %.3f\n", (float)num1 / num2);
    printf("Modulus:         %u\n", num1 % num2);

    return 0;
}