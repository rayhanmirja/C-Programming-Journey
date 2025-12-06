#include <stdio.h>

int main()
{
    int age, birth_year;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    age = 2025 - birth_year;

    printf("Your age is %d\n", age);

    return 0;
}
