#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("------------------\n");
    printf("Square of the number is: %d\n ", number * number);
    printf("Cube of the number: %d\n ", number * number * number);
    return 0;
}
