#include <stdio.h>
#include <math.h>

float calcula_distancia (float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
int main ()
{
    float xA, yA, xB, yB, xC, yC, d1, d2, d3, perimetro;
    printf("\nDigite as coordenadas X e Y do ponto A: ");
    scanf ("%f%f", &xA, &yA);
     printf("\nDigite as coordenadas X e Y do ponto B: ");
    scanf ("%f%f", &xB, &yB);
     printf("\nDigite as coordenadas X e Y do ponto C: ");0
     
    scanf ("%f%f", &xC, &yC);

    d1 = calcula_distancia (xA, yA, xB, yB);
    d2 = calcula_distancia (xB, yB, xC, yC);
    d3 = calcula_distancia (xC, yC, xA, yA);

    perimetro = d1 + d2 + d3;

    printf ("\nO perímetro deste triangulo é: %.f\n", perimetro);
}





















