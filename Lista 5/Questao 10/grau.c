#include <stdio.h>
#define TOT 7
#define QTDP 5

struct instrucao{
    int qtd;
    int soma;
};
typedef struct instrucao Tinstru;

void inicializa(Tinstru v[]){
    for(int i=0; i < TOT; i++){
        v[i].qtd=0;
        v[i].soma=0;
    }
}
void exibe(Tinstru v[]){
    float md;
    for(int i=0; i < TOT; i++){
        if(v[i].qtd > 0){
            md=(float)v[i].soma/v[i].qtd;
            printf("\nGrau: %d Media: %.1f", i+1, md);
        }
    }
}
int main(){
    Tinstru v[TOT]; 
    inicializa(v);
    int grau, idade;
    int soma=0;
    for(int cont=0; cont < QTDP; cont++){
        printf("\nDigite grau de instrucao (1-analfabeto,2-primeiro grau,3-segundo grau,4-superior,5-mestrado,6-doutorado,7-outros): ");
        scanf("%d", &grau);
        printf("\nDigite idade: ");
        scanf("%d", &idade);
        v[grau-1].qtd++;
        v[grau-1].soma+=idade;
    }
    exibe(v);
    return 0;
}