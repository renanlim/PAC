#include <stdio.h>

void pagamento_dinheiro(float valordesp)
{
    float valorpago, troco;
    printf("\nInfome o valor pago em reais: ");
    scanf("%f", &valorpago);
    troco = valorpago - valordesp;
    if(troco == 0)
        printf("\nNão há troco");
    else
        printf("\nTroco: %.1f", troco);
}
int main()
{
    float despesa;
    int formapg;
    printf("\n[1]Debito\t[2]Credito\t[3]Dinheiro");
    printf("\nInforme o valor da despesa e a forma de pagamento: ");
    scanf("%f%d", &despesa, &formapg);
    if(formapg == 3)
        pagamento_dinheiro(despesa);
    else
        printf ("\nNao há troco");
    return 0;
}
