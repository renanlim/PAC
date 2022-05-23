#include <stdio.h>

void calculaEleitor (int idade)
{
    if (idade < 16)
    {
        printf ("\nNão eleitor\n");
    }       
    else if (idade < 18 || idade > 70)
    {
        printf ("\nEleitor facultativo\n");
    }
    else
    {
        printf ("\nEleitor\n");
    } 
}
int main ()
{
    int idade;
    printf ("\nInforme sua idade: ");
    scanf ("%d", &idade);

    calculaEleitor (idade);
    return 0;
}