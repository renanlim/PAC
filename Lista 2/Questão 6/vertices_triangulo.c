#include <stdio.h>
#include <math.h>

float calcula_distancia (float xA, float yA, float xB, float yB)
{
    float modulo;
    modulo = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));

    return modulo;
}
int main ()
{
    float xA, yA, xB, yB, xC, yC, soma_do_perimetro;
    printf("\nDigite a coordenada do ponto xA: ");
    scanf ("%f", &xA);
    printf("\nDigite a coordenada do ponto yA: ");
    scanf ("%f", &yA);
    printf("\nDigite a coordenada do ponto xB: ");
    scanf ("%f", &xB);
    printf("\nDigite a coordenada do ponto yB: ");
    scanf ("%f", &yB);
    printf("\nDigite a coordenada do ponto xC: ");
    scanf ("%f", &xC);
    printf("\nDigite a coordenada do ponto yC: ");
    scanf ("%f", &yC);

    float d1 = calcula_distancia (xA, yA, xB, yB);
    float d2 = calcula_distancia (xB, yB, xC, yC);
    float d3 = calcula_distancia (xC, yC, xA, yA);

    soma_do_perimetro = d1 + d2 + d3;

    printf ("\nO perímetro deste triangulo é: %.f\n", soma_do_perimetro);
}

//solução 

#include <stdio.h>
#include <math.h>

float calcula_distancia (float xA, float yA, float xB, float yB)
{
    float modulo;
    modulo = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));

    return modulo;
}
int main ()
{
    float xA, yA, xB, yB, xC, yC, soma_do_perimetro;
    printf("\nDigite a coordenada do ponto xA: ");
    scanf ("%f", &xA);
    printf("\nDigite a coordenada do ponto yA: ");
    scanf ("%f", &yA);
    printf("\nDigite a coordenada do ponto xB: ");
    scanf ("%f", &xB);
    printf("\nDigite a coordenada do ponto yB: ");
    scanf ("%f", &yB);
    printf("\nDigite a coordenada do ponto xC: ");
    scanf ("%f", &xC);
    printf("\nDigite a coordenada do ponto yC: ");
    scanf ("%f", &yC);

    float d1 = calcula_distancia (xA, yA, xB, yB);
    float d2 = calcula_distancia (xB, yB, xC, yC);
    float d3 = calcula_distancia (xC, yC, xA, yA);

    soma_do_perimetro = d1 + d2 + d3;

    printf ("\nO perímetro deste triangulo é: %.f\n", soma_do_perimetro);
}






















