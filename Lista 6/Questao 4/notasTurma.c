4) Faça um programa que leia as notas (número inteiro de 0 a 10) dos alunos de uma turma e exiba a
quantidade de alunos em cada nota, conforme exemplo abaixo. Término da leitura: nota = -1. Faça as
seguintes funções:
a) inicializa(): recebe como parâmetro um vetor de números inteiros e inicializa-o apropriadamente.
b) exibe():recebe como parâmetro um vetor de números inteiros já preenchido e exibe a quantidade de
alunos em cada nota conforme exemplo abaixo.
Nota 0: 2
Nota 1: 4
…
Nota 10: 8
    
#include <stdio.h>
#define TOT 11

void inicializa(int *v){
    int cont;
    for(cont=0;cont<TOT;cont++)
        v[cont]=0;
}
void exibe(int v[]){
    int cont;
    for(cont=0;cont<TOT;cont++)
        printf("\nNota %d: %d", cont, v[cont]);
}
int main(){
    int vqtd[TOT], nota;
    inicializa(vqtd);
    printf("Digite nota(0 a 10).-1 para encerrar: ");
    scanf("%d", &nota);
    while(nota!=-1){
        vqtd[nota]++;
        printf("Digite nota(0 a 10).-1 para encerrar: ");
        scanf("%d", &nota);
    }
    exibe(vqtd);
    return 0;
}
