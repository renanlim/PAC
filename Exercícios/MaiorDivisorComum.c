#include <stdio.h>

int MaiorDivisorComum(int x, int y)
{
    int resto = 1;
    while (resto != 0)
    {
        resto = x % y;
        if (resto == 0)
        {
            return y;
        }
        x = y;
        y = resto;
    }   
}