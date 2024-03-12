#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 101 / 7; // 14.000000
    float b = (float)(3 % 5); // 3.000000
    float c = 21 > 43 || 6 != 6; //0.000000
    double result = 12 + (1 * '3'); // 51+12=63.000000

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %f\n", c);
    printf("result = %f\n", result);
    return 0;
}