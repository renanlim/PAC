#include <stdio.h>
  
int calcula_bonus (int salariobase, int temposervico)
{
    int bonus = 0.02 * salariobase * temposervico;
    
    printf ("\nO bonus por tempo de serviço é de %d reais\n", bonus);
    return bonus;
}  