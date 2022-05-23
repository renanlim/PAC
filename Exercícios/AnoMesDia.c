#include <stdio.h>

int main () {
    int ano, mes, dia;
    printf ("Digite um ano: ");
    scanf ("%d", &ano);
    printf ("Digite um mês: ");
    scanf ("%d", &mes);
    printf ("Digite um dia: ");
    scanf ("%d", &dia);
        if (ano < 0)
        {
            printf ("Ano inválido: %d\n", ano);
            return (-6);
        }
        if (mes < 1 || mes > 12)
        {
            printf ("Mês inválido: %d\n", mes);
            return (-1);
        }
        if (dia < 1 || dia > 31)
        {
            printf ("Dia inválido: %d\n", dia);
            return (-2);
        }
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia == 31)
        {
            printf ("Dia inválido, esse mês não possui 31 dias: %d\n", dia);
            return (-3);
        }          
        if (mes == 2 && dia > 29)
        {
            printf ("Dia inválido: %d\n", dia);
            return (-5);
        }
        if (!(ano%4 == 0 && ano%100 != 0 || ano%400 == 0) && (mes == 2 && dia > 28))
        {
            printf ("Dia inválido: %d\n", dia);
            return (-4);
        }     

        printf ("Data válida\n");
        return (1);
}  
