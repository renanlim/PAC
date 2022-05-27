#include <stdio.h>

float calcula_volume_caixa (float lA, float lB, float lC)
{ 
    return volume_caixa = lA * lB * lC;
}
int calcula_volume_cilindro (int h, int r)
{
    return volume_cilindro = 3.14 * h * r * 2;
}
int main ()
{
    float ladoA, ladoB, ladoC, h, r;
    printf ("\nDimensão da caixa (lado a): ");
    scanf ("%d", &ladoA);
    printf ("\nDimensão da caixa (lado b): ");
    scanf ("%d", &ladoB);
    printf ("\nDimensão da caixa (lado c): ");
    scanf ("%d", &ladoC);

    int volcaixa = calcula_volume_caixa (ladoA, ladoB, ladoC);

    printf ("\nDimensão do cilindro (altura): ");
    scanf ("%d", &h);
    printf ("\nDimensão do cilindro (raio): ");
    scanf ("%d", &r);

    int volcilindro = calcula_volume_cilindro (h, r);

    int caixa_com_furo = volcaixa - volcilindro;

    printf ("\nO volume da caixa com o furo cilindrico é de: %d\n", caixa_com_furo);
    
    return 0;
}
