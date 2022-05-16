#include <stdio.h>

float calcula_media_prova (float P1, float P2)
{
    float media_prova, soma_prova;
    soma_prova = P1 + P2;
    media_prova = soma_prova/2;
    return media_prova;
}
float calcula_media_trab (float Trab1, float Trab2)
{
    float media_trab, soma_trab;
    soma_trab = Trab1 + Trab2;
    media_trab = soma_trab/2;
    return media_trab;
}
int main()
{
    int matricula;
    float P1, P2, Trab1, Trab2, medprova, medtrab, medfinal;
    printf ("\nDigite a matricula do aluno: ");
    scanf ("%d", &matricula);
    printf ("\nDigite a nota da P1: ");
    scanf ("%f", &P1);
    printf ("\nDigite a nota da P2: ");
    scanf ("%f", &P2);
    printf ("\nDigite a nota do Trab1: ");
    scanf ("%f", &Trab1);
    printf ("\nDigite a nota do Trab2: ");
    scanf ("%f", &Trab2);

    medprova = calcula_media_prova (P1, P2);
    medtrab = calcula_media_trab (Trab1, Trab2);
    medfinal = (medprova + medtrab) /2;


    printf ("\nMedia das provas: %.2f\n", medprova);
    printf ("\nMedia dos trabalhos: %.2f\n", medtrab);
    printf ("\nMedia final: %.2f\n", medfinal);

    return 0;
}