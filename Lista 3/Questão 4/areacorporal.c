#include <stdio.h>
#include <math.h>

float calculaArea(float h, float p)
{
    return sqrt(p*h)/60;
}
void alteracaoArea(float area1, float area2)
{
    if(area1 == area2)
        printf("\nManteve área inalterada\n");
    else
        if(area1 < area2)
            printf("\nAumentou a área corporal\n");
        else
            printf("\nDiminui a área corporal\n");
}
int main()
{
    float h, pinicial, pfinal, area1, area2;
    printf("\nInforme altura, peso no inicio do ano e peso no final do ano: ");
    scanf("%f%f%f", &h, &pinicial, &pfinal);
    area1 = calculaArea (h, pinicial);
    area2 = calculaArea (h, pfinal);

    alteracaoArea(area1, area2);
    return 0;
}
