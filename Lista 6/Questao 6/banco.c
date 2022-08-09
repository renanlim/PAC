6) Um banco possui as seguintes informações dos seus clientes: número da conta do cliente e saldo do cliente.
Faça um programa que leia os dados dos clientes e exiba para cada cliente: número da conta, saldo do
cliente e mensagem informando se o saldo dele está acima do saldo médio dos clientes do banco, abaixo
do saldo médio dos clientes do banco ou se é igual ao saldo médio dos clientes do banco. Término da leitura:
número da conta do cliente = 0. Considere que o banco possui, no máximo, 10573 clientes. O seu programa
deverá utilizar a função abaixo.
a) Função exibe(): recebe como parâmetros um vetor de struct, já preenchido, a quantidade de clientes do
banco e o saldo médio do banco e exibe para cada cliente o número da conta, saldo do cliente e
mensagem informando se o saldo dele está acima do saldo médio dos clientes do banco, abaixo do saldo
médio dos clientes do banco ou se é igual ao saldo médio dos clientes do banco.

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
