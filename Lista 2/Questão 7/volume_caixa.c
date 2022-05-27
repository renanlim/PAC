#include <stdio.h>

float calcula_volume_caixa (float lA, float lB, float lC)
{ 
    return volume_caixa = lA * lB * lC;
}
float calcula_volume_cilindro (float h, float r)
{
    return volume_cilindro = 3.14 * h * r * 2;
}
int main ()
{
    float ladoA, ladoB, ladoC, h, r, volcilindro, caixa_com_furo, volcaixa;
    printf ("\nDimensão da caixa (lado a, lado b, lado c): ");
    scanf ("%f%f%f", &ladoA, &ladoB, &ladoC);
    printf ("\nDimensão do cilindro (altura e raio): ");
    scanf ("%f%f", &h, &r);
    
    volcilindro = calcula_volume_cilindro (h, r);
    volcaixa = calcula_volume_caixa (ladoA, ladoB, ladoC);
    caixa_com_furo = volcaixa - volcilindro;

    printf ("\nO volume da caixa com o furo cilindrico é de: %f\n", caixa_com_furo);
    
    return 0;
}
