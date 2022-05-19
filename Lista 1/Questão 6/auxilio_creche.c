#include <stdio.h>

void auxilio_creche (int quantdep)
{
    int valor, dependente;
    dependente = quantdep;
    valor = 50 * dependente;
    printf ("\nO valor do seu auxílio será de: %d reais por dependente", valor);
}


void auxilio_creche (int quantdep)
{
    float aux;
    aux = quantdep * 50;
    printf ("\nO valor do seu auxílio será de: %.2f reais por dependente", aux);
}
