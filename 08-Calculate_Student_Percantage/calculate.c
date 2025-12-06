#include <stdio.h>

int main()
{
    int Bangla, English, Physics, Chemistry, Biology, ICT, Total;
    float percantage;

    printf("Marks in Bangla: ");
    scanf("%d", &Bangla);

    if (Bangla > 100 || Bangla < 0)
    {
        printf("Invalid input! Marks must be 0-100. The program will stop.\n");
        return 0;
    }

    printf("Marks in English: ");
    scanf("%d", &English);
    if (English > 100 || English < 0)
    {
        printf("Invalid input! Marks must be 0-100.\n");
        return 0;
    }

    printf("Marks in Physics: ");
    scanf("%d", &Physics);
    if (Physics > 100 || Physics < 0)
    {
        printf("Invalid input! Marks must be 0-100.\n");
        return 0;
    }

    printf("Marks in Chemistry: ");
    scanf("%d", &Chemistry);
    if (Chemistry > 100 || Chemistry < 0)
    {
        printf("Invalid input! Marks must be 0-100.\n");
        return 0;
    }

    printf("Marks in Biology: ");
    scanf("%d", &Biology);
    if (Biology > 100 || Biology < 0)
    {
        printf("Invalid input! Marks must be 0-100.\n");
        return 0;
    }

    printf("Marks in ICT: ");
    scanf("%d", &ICT);
    if (ICT > 100 || ICT < 0)
    {
        printf("Invalid input! Marks must be 0-100.\n");
        return 0;
    }

    Total = Bangla + English + Physics + Chemistry + Biology + ICT;
    percantage = (Total / 600.0) * 100;

    printf("\nTotal Marks obtained %d/600\n", Total);
    printf("Student got %.2f%% \n", percantage);

    return 0;
}
