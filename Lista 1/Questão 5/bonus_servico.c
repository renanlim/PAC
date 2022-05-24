#include <stdio.h>
  
float calcula_bonus(int tempo, float salbase)
{
    float bonus;
    bonus = 0.02 * salbase * tempo;
    
    printf ("\nO bonus por tempo de serviço é de %.2f reais\n", bonus);
    return bonus;
} 
