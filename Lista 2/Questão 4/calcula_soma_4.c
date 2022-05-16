#include <stdio.h>

int le_calcula_soma (int num1, int num2, int num3)
{
    int soma;

    printf ("\nInforme o primeiro número: ");
    scanf ("%d", &num1);
    printf ("\nInforme o segundo número: ");
    scanf ("%d", &num2);
    printf ("\nInforme o terceiro número: ");
    scanf ("%d", &num3);

    soma = num1 + num2 + num3;

    return soma;
}
void calcula_media (int somanum)
{
    float media;
    media = (float)somanum / 3;
    printf ("\nO valor da media é: %.f\n", media);
}
int main ()
{
    int num1, num2, num3, resultsoma;
    resultsoma = le_calcula_soma (num1, num2, num3);
    calcula_media (resultsoma);
    printf ("\nSoma: %d\n", resultsoma);
    
    return 0;
}