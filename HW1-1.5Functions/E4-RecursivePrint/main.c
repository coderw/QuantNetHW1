#include <stdio.h>
#include <stdlib.h>

void recursivePrint(int x);

int main()
{
    recursivePrint(123458);
    return 0;
}

void recursivePrint(int x)
{
    if ( x % 10 == x)
    {
        putchar(x + '0');
    }
    else    {
        recursivePrint(x / 10);
        putchar(x % 10 + '0');
    }
}
