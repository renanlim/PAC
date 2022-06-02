#include <stdio.h>

float calcula_volume_caixa (float lA, float lB, float lC)
{ 
    return lA * lB * lC;
}
float calcula_volume_cilindro (float h, float r)
{
    return 3.14 * h * r * r;
}
int main ()
{
    float a, b, h, d, volcilindro, caixa_com_furo, volcaixa;
    printf ("\nDigite os valores a, b, h, d): ");
    scanf ("%f%f%f%", &a, &b, &h, %d);
    
    volcilindro = calcula_volume_cilindro (h, d/2);
    volcaixa = calcula_volume_caixa (a, b, h);
    caixa_com_furo = volcaixa - volcilindro;

    printf ("\nO volume da caixa com o furo cilindrico é de: %f\n", caixa_com_furo);
    
    return 0;
}
