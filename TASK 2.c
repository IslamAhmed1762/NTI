#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

void copyArray(const uint32_t *source, uint32_t *destination, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}

void swapArrays(uint32_t *arrayA, uint32_t *arrayB, size_t sizeA, size_t sizeB) {
    size_t minSize = (sizeA < sizeB) ? sizeA : sizeB;
    for (size_t i = 0; i < minSize; ++i) {
        uint32_t temp = arrayA[i];
        arrayA[i] = arrayB[i];
        arrayB[i] = temp;
    }
}

void displayArray(const uint32_t *array, size_t size, const char *name) {
    printf("%s: ", name);
    for (size_t i = 0; i < size; ++i) {
        printf("%u ", array[i]);
    }
    printf("\n");
}

int main(void) {
    uint32_t arrayA[] = {1, 2, 3, 4, 5, 6};
    uint32_t arrayB[] = {5, 6, 7, 8, 9};

    size_t sizeA = sizeof(arrayA) / sizeof(arrayA[0]);
    size_t sizeB = sizeof(arrayB) / sizeof(arrayB[0]);

    swapArrays(arrayA, arrayB, sizeA, sizeB);

    displayArray(arrayA, sizeA, "Array A after swap");
    displayArray(arrayB, sizeB, "Array B after swap");

    return 0;
}
