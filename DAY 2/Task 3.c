#include <stdio.h>

int main() {
    int i, num, sum = 0;
    float average;

    printf("Input the 10 numbers:\n");

    for(i = 1; i <= 10; i++) {
        printf("Number-%d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = sum / 10.0;

    printf("The sum of 10 numbers is: %d\n", sum);
    printf("The average is: %.6f\n", average);

    return 0;
}
