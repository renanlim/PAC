#include <stdio.h>

int calcula_soma (int num1, int num2, int num3)
{
    int soma;
    soma = num1 + num2 + num3;
    return soma;
}
void calcula_media (int num1, int num2, int num3)
{
    float media;
    media = (float)(num1 + num2 + num3) / 3;
    printf ("\nO valor da media é: %.f\n", media);
}
int main ()
{
    int num1, num2, num3, soma_num;

    printf ("\nInforme o primeiro número: ");
    scanf ("%d", &num1);
    printf ("\nInforme o segundo número: ");
    scanf ("%d", &num2);
    printf ("\nInforme o terceiro número: ");
    scanf ("%d", &num3);

    soma_num = calcula_soma (num1, num2, num3);
    printf ("\nO valor da soma é: %d\n", soma_num);
    calcula_media (num1, num2, num3);

    return 0;
}

