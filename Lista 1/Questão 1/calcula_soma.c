#include <stdio.h>

int calcula_soma (int num1, int num2, int num3)
{
    int soma;
    soma = num1 + num2 + num3;
    printf ("\nO valor da soma é: %d\n", soma);
    return soma;
}

int main()
{
    int num1, num2, num3;
    printf ("\nDigite o primeiro número: ");
    scanf ("%d",&num1);
    printf ("\nDigite o segundo número: ");
    scanf ("%d",&num2);
    printf ("\nDigite o terceiro número: ");
    scanf ("%d",&num3);
    calcula_soma (num1, num2, num3);
}

