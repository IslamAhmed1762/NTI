#include <stdio.h>

int main() {
    int age, i = 0;
    int baby = 0, school = 0, adult = 0;

    printf("Enter ages of 15 people:\n");

    while (i < 15) {
        printf("Person %d age: ", i + 1);
        scanf("%d", &age);

        if (age >= 0 && age <= 5)
            baby++;
        else if (age >= 6 && age <= 17)
            school++;
        else if (age >= 18)
            adult++;

        i++;
    }

    printf("\nNumber of babies (0–5): %d\n", baby);
    printf("Number of school-aged (6–17): %d\n", school);
    printf("Number of adults (18+): %d\n", adult);

    return 0;
}
