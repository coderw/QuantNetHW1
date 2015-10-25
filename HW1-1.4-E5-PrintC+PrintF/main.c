#include <stdio.h>
#include <stdlib.h>

double fahrenheitValues(int x);

int main()
{
    int CStart = 0, CEnd = 19, i;
    printf("Celsius Values: \t Fahrenheit Values: \t \n");
    for ( i = CStart; i <= CEnd; i++)
    {
        printf("%d \t  \t %10.1f \n", i, fahrenheitValues(i));
    }
    return 0;
}

double fahrenheitValues(int x)
{
    double F = x + 32;
    F *= 9;
    F /= 5;
    return F;
}
