#include <stdio.h>

void situacaoAluno (float media)
{
    if (media >= 5)
    {
        printf ("\nAprovado");
        if (media > 9)
        {
            printf ("\tParabéns\n");    
        }
    }
    else
        if (media >= 3)
        {
            printf ("\nEm final\n");
        }
        else
            printf ("\nReprovado\n");
}
int main ()
{
    int matr;
    float n1, n2, calculaMedia;
    printf ("\nInforme sua matricula: ");
    scanf ("%d", &matr);
    printf ("\nNota 1: ");
    scanf ("%f", &n1);
    printf ("\nNota 2: ");
    scanf ("%f", &n2);

    calculaMedia = (n1 + n2)/2;

    printf ("\nMatricula: %d", matr);
    printf ("\nMedia: %.1f", calculaMedia);

    situacaoAluno (calculaMedia);
    
    return 0;
}