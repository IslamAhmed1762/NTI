#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);  
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("Output string: %s\n", result);
    return 0;
}
