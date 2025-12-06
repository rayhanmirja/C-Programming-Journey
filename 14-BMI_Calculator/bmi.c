#include <stdio.h>

int main()
{
    float weight, BMI, height;
    int feet, inches;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your heights (feet): ");
    scanf("%d", &feet);

    printf("Enter your height (inches): ");
    scanf("%d", &inches);

    height = (feet * 0.3048) + (inches * 0.0254);

    BMI = weight / (height * height);

    printf("Your BMI is %0.2f\n", BMI);

    return 0;
}
