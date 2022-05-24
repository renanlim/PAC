#include <stdio.h>

void evento (int diasevento)
{
    int semanas, dias;

    semanas = diasevento / 7;
    dias = diasevento%7;
    printf ("\nO evento tera %d numeros decorridos, com %d semanas e %d dias", diasevento, semanas, dias);
}
