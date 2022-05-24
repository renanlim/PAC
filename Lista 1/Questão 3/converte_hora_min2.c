#include <stdio.h>

void calcula_atraso (int horaprevisto, int minprevisto, int horaefetivo, int minefetivo)
{
    int totalprevisto, totalefetivo, totalatraso;
    
    totalprevisto = converte_hora_min (horaprevisto, minprevisto);
    totalefetivo = converte_hora_min (horaefetivo, minefetivo);
    totalatraso = totalefetivo - totalprevisto;
    printf ("\nO total de minutos atrasados é de: %d", totalatraso);
}
