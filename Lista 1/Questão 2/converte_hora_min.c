#include <stdio.h>

void converte_hora_min (int hora, int min)
{
    int converte;
    converte = hora * 60 + min;
    printf ("\nO total de horas em minutos é de %d\n", converte);
}
int main ()
{
    int hora, min;
    printf ("\nInforme um valor para hora: ");
    scanf ("%d", &hora);
    printf ("\nAgora informe um valor para minutos: ");
    scanf ("%d", &min);
    converte_hora_min (hora, min);
}