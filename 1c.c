#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    if (num % 2 != 0)
    {
        printf("Mashrafe\n");
    }
    if (num < 100)
    {
        printf("Shakib\n");
    }
    else if (num >= 100)
    {
        printf("Mahmudullah\n");
    }
    if (num >= 0 && num < 5)
    {
        printf("Imrul\n");
    }
    else if (num >= 0 && num <= 49)
    {
        printf("Tamim\n");
    }
    else
    {
        printf("Rubel");
    }
}