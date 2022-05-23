#include <stdio.h>

float calculaidh (float E, float L, float R)
{
    if (E >= L + R)
    {
        float IDH = E * L * R / ((E + L + R)/3);
    }
    else
    {
        float IDH = (E + L + R)/3;
    }
    return IDH;
}
int main ()
{
    float E, L, R, IDH;
    printf ("\nInforme um valor para educação: ");
    scanf ("%f", &E);
    printf ("\nInforme um valor para longevidade: ");
    scanf ("%f", &L);
    printf ("\nInforme um valor para riqueza: ");
    scanf ("%f", &R);

    IDH = calculaidh (E, L, R);
    printf ("\nO IDH nesta localidade é: %.1f\n", IDH);

    return 0;
}