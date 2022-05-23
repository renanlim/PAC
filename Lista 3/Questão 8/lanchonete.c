#include <stdio.h>

void pagamento_dinheiro ( float valordesp)
{
    float valorpago, troco;
    
    printf ("\nInfome o valor pago em reais: ");
    scanf ("%f", &valorpago);
    troco = valorpago - valordesp;
    if (troco > 0)
    {
        printf ("\nTroco: %.1f", troco);
    }
    else if (troco < 0)
    {
        printf ("\n Valor pago insuficiente");
    }
    else
        printf ("\nNão há troco");
}
int main ()
{
    float despesa;
    int formapg;
    printf ("\nInforme o valor da despesa: ");
    scanf ("%f", &despesa);
    printf ("\nQual a forma de pagamento: ");
    printf ("\n[1]Debito");
    printf ("\n[2]Credito");
    printf ("\n[3]Dinheiro\n");
    scanf ("%d", &formapg);

    if (formapg == 3)
    {
        pagamento_dinheiro(despesa);
    }
    else
        printf ("\nNao há troco");
}