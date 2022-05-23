#include <stdio.h>

void par_impar (int num)
{
    if (num % 2 == 0)
    {
        printf ("\nNúmero PAR");
        int triplo = num * 3;
        printf ("\nO triplo desse número é: %d\n", triplo);
    }
    else
    {
        printf ("\nNúmero IMPAR\n");
    }
}
int main ()
{
    int numint, triplo;
    printf ("\nInforme um número: ");
    scanf ("%d", &numint);

    par_impar (numint);

    return 0;
}