#include <stdio.h>

int calculaMaiorNum (int num1, int num2, int num3)
{
    int maior = num1;

    if (num2 > maior){
        maior = num2;
    };

    if(num3 > maior){
        maior = num3;
    }

    return maior;

}
int main ()
{
    int n1, n2, n3, maiornum;
    printf ("\nNumero 1: ");
    scanf ("%d", &n1);
    printf ("\nNumero 2: ");
    scanf ("%d", &n2);
    printf ("\nNumero 3: ");
    scanf ("%d", &n3);
    maiornum = calculaMaiorNum (n1, n2, n3);
    printf ("\nO maior numero é: %d\n", maiornum);

    return 0; 
}
