#include <stdio.h>

#define MAX_ARRAY_SIZE 1000

float calculateAverage(float numbers[], int count)
{
    float sum = 0.0f;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return (count > 0) ? (sum / count) : 0.0f;
}

int main()
{
    float numbers[MAX_ARRAY_SIZE];
    int numElements = 0;

    printf("Enter the number of elements (max %d): ", MAX_ARRAY_SIZE);
    scanf("%d", &numElements);

    if (numElements < 1 || numElements > MAX_ARRAY_SIZE)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numElements; i++)
    {
        printf("numbers[%d] = ", i);
        scanf("%f", &numbers[i]);
    }

    float average = calculateAverage(numbers, numElements);
    printf("Average of array: %.2f\n", average);

    return 0;
}