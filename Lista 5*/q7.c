#include <stdio.h>
#define TOT 5

struct clientes
{
    int conta;
    float saldo;
};
typedef struct clientes Tcli;

void exibe( Tcli v[], int qtd, float saldoMedio){
    int cont;
    for (cont = 0; cont < qtd; cont++){
        printf("Conta: %d", v[cont].conta);
        printf("Saldo: %f", v[cont].saldo);
        if(v[cont].saldo > saldoMedio)
            printf("Acima da media");
        else
            if(v[cont].saldo == saldoMedio)
                printf("Igual a media");
            else
                printf("Abaixo da media");
    }
}
int main(){
    Tcli vclientes[TOT];
    int i=0, soma=0;
    float
    print("Digite conta: ");
    scanf("%d", &conta);
    while(conta!=0){
        printf("Digite saldo: ");
        scanf("%f", &vclientes[i].saldo);
        vclientes[i].conta=conta;
        i++;
        soma+=vclientes[i].saldo
        print("Digite conta: ");
        scanf("%d", &conta);
    }
    if(i!=0){
        media=soma/i;
    }
    exibe(vclientes, i, media)
    return 0;
}