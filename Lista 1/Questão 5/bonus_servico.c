#include <stdio.h>
  
int calcula_bonus (int salariobase, int temposervico)
{
    int bonus = 0.02 * salariobase * temposervico;
    
    printf ("\nO bonus por tempo de serviço é de %d reais\n", bonus);
    return bonus;
}  

float calcula_bonus(int tempo, float salbase)
{
    float bonus;
    bonus = 0.02 * salbase * tempo;
    
    printf ("\nO bonus por tempo de serviço é de %.2f reais\n", bonus);
    return bonus;
} 
