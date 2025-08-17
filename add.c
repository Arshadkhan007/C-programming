#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter your 2 numbers: ");
    scanf("%d %d", &a, &b);

    int c = a + b;
    printf("Addition of %d and %d is: %d\n", a, b, c);

    return 0;
}

