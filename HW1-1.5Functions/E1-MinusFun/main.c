#include <stdio.h>
#include <stdlib.h>

int minus (int a, int b);

int main()
{
    int a, b;
    printf("Please enter 2 numbers for the difference: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The difference of %d and %d is: %d \n", a,b,minus(a,b));
    return 0;
}

int minus(int a, int b)
{
    return b - a;
}
