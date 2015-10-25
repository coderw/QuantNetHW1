#include <stdio.h>
#include <stdlib.h>

double celsiusValues(int x);

int main()
{
    int fStart = 0, fEnd = 300, i;
    printf("Fahrenheit Values: \t Celsius Values: \t \n");
    for ( i = fStart; i <= fEnd; i += 20)
    {
        printf("%d \t        \t %10.1f \n", i, celsiusValues(i));
    }
    return 0;
}

double celsiusValues(int x)
{
    double C = x - 32;
    C *= 5;
    C /= 9;
    return C;
}
