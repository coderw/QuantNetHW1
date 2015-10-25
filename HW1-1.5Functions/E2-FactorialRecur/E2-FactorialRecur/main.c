#include <stdio.h>
#include <stdlib.h>

int factorial(int x);

int main()
{
    int x;
    printf("Please enter a number: \n");
    scanf("%d",&x);
    printf("The factorial of %d is %d: \n",x,factorial(x));
    return 0;
}

int factorial(int x)
{
    if ( x == 1) return 1;
    return factorial(--x) * x;
}
