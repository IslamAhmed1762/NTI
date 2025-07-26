#include <stdio.h>

int main()
{
    int base, exponent;
    int result = 1;

    printf("Enter the number: ");
    scanf("%d", &base);

    printf("Enter a power: ");
    scanf("%d", &exponent);

    int i = 0;
    while(i < exponent)
    {
        result = result * base;
        i++;
    }

    printf("Answer = %d\n", result);

    return 0;
}
