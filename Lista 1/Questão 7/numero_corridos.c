#include <stdio.h>

void numeros_corridos (int numdecorridos)
{
    int semanas, dias;

    semanas = numdecorridos / 7;
    dias = numdecorridos%7;
    printf ("\nO evento tera %d numeros decorridos, com %d semanas e %d dias", numdecorridos, semanas, dias);
}