#include <stdio.h>

int main()
{
    // Create Variables
    short int s;
    int i;
    long int li;
    long long int lli;
    char c;
    float f;
    double d;
    long double ld;

    // Print Sizes
    printf("Size of short int      = %lu bytes\n", sizeof(s));
    printf("Size of int            = %lu bytes\n", sizeof(i));
    printf("Size of long int       = %lu bytes\n", sizeof(li));
    printf("Size of long long int  = %lu bytes\n", sizeof(lli));
    printf("Size of char           = %lu bytes\n", sizeof(c));
    printf("Size of float          = %lu bytes\n", sizeof(f));
    printf("Size of double         = %lu bytes\n", sizeof(d));
    printf("Size of long double    = %lu bytes\n", sizeof(ld));

    return 0;
}