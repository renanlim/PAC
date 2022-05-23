#include <stdio.h>
#include <math.h>

float calculaArea ( float h, float p)
{
    float A = sqrt(p*h)/60;
    return A;
}
void alteracaoArea ( float area1, float area2)
{
    if (area1 == area2)
        printf ("\nManteve área inalterada\n");
    else
        if (area1 < area2)
            printf ("\nAumentou a área corporal\n");
            else
                printf ("\nDiminui a área corporal\n");
}
int main ()
{
    float h, pinicial, pfinal, area1, area2;
    printf ("\nInforme sua altura: ");
    scanf ("%f", &h);
    printf ("\nInforme seu peso no inicio do ano: ");
    scanf ("%f", &pinicial);
    printf ("\nInforme seu peso no final do ano: ");
    scanf ("%f", &pfinal);

    area1 = calculaArea (h, pinicial);
    area2 = calculaArea (h, pfinal);

    alteracaoArea (area1, area2);
}