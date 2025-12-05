#include<stdio.h>

int main() {
    int age;
    char name[50];
    char department[50];
    char university[50];

    printf("Enter the name \n");
    scanf("%s", name);
    printf("Enter the age \n");
    scanf("%d", &age);
    printf("Enter your department \n");
    scanf("%s", department);
    printf("Enter your university name \n");
    scanf("%s", university);
    printf(" Your Bio:\n Name: %s\n age: %d\n department: %s\n university: %s\n", name, age, department, university);

    return 0;
}
