#include <stdio.h>

int calculaMaiorNum (int num1, int num2, int num3)
{
 if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else 
        if (num2 > num1 && num2 > num3)
        {
            return num2;
        }
        else 
            if (num3 > num1 && num3 > num2)
            {
                return num3;
            }
}
int main ()
{
    int n1, n2, n3, maiornum;
    printf ("\nNumero 1: ");
    scanf ("%d", &n1);
    printf ("\nNumero 2: ");
    scanf ("%d", &n2);
    printf ("\nNumero 3: ");
    scanf ("%d", &n3);
    maiornum = calculaMaiorNum (n1, n2, n3);
    printf ("\nO maior numero é: %d\n", maiornum);

    return 0; 
}