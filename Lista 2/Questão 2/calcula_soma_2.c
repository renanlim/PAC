#include <stdio.h>

int calcula_soma (int num1, int num2, int num3)
{
    int soma;
    soma = num1 + num2 + num3;
    printf ("\nO valor da soma é: %d\n", soma);
    return soma;
}
void calcula_media (int num1, int num2, int num3)
{
    int somanum;
    float media;
    somanum = calcula_soma(num1,num2,num3);
    media = (float)somanum / 3;
    printf ("\nO valor da media é: %.f\n", media);
}
int main ()
{
    int num1, num2, num3;

    printf ("\nInforme o primeiro número: ");
    scanf ("%d", &num1);
    printf ("\nInforme o segundo número: ");
    scanf ("%d", &num2);
    printf ("\nInforme o terceiro número: ");
    scanf ("%d", &num3);

    calcula_media (num1, num2, num3);

    return 0;
}

