#include <stdio.h>
#define TOT 10573
struct cliente
{
    int conta;
    float saldo;
};
typedef struct cliente Tcliente;

void exibe(Tcliente v[], int qtd, float salMedio){
    int i;
    for ( i = 0; i < qtd; i++)
    {
        printf("\nConta: %d", v[i].conta);
        printf("\nSaldo: %f", v[i].saldo);
        if(v[i].saldo > salMedio)
            printf("\nAcima da media");
        else
            if(v[i].saldo == salMedio) 
                printf("\nIgual a media");
            else
                printf("\nAbaixo da media");
    }  
}
int main(){
    Tcliente vcliente[TOT];
    int conta, soma = 0, i = 0;
    float media;
    printf("Digite conta. 0 para encerrar: ");
    scanf("%d", &conta);
    while(conta!=0){
        printf("Digite saldo: ");
        scanf("%f", &vcliente[i].saldo);
        vcliente[i].conta=conta;   
        soma+=vcliente[i].saldo;
        i++;
        printf("Digite conta. 0 para encerrar: ");
        scanf("%d", &conta);
    }
    if(i!=0){
        media=soma/i;
        exibe(vcliente,i,media);
    }
    return 0;
}