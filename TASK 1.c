#include <stdio.h>

void swapMethod1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapMethod2(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swapMethod3(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Core values:\n");
    printf("a = %d, b = %d\n", a, b);

    swapMethod1(&a, &b);
    printf("\nAfter swap using temp variable:\n");
    printf("a = %d, b = %d\n", a, b);

    swapMethod2(&a, &b);
    printf("\nAfter swap using addition and subtraction:\n");
    printf("a = %d, b = %d\n", a, b);

    swapMethod3(&a, &b);
    printf("\nAfter swap using XOR:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
