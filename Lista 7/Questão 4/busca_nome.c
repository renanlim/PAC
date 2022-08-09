#include <stdio.h>
#include <string.h>
#define MAXC 31
#define TOT 30

int busca(char nomes[][MAXC], char elementoProc[]){
    int i;
    for ( i = 0; i < TOT; i++){
        if(strcmp(nomes[i], elementoProc)==0)
        return i;
    }
    return-1;   
}
void leitura(char nomes[][MAXC], float media[]){
    int cont;
    for(cont = 0; cont < TOT; cont++){
        printf("Digite nome: ");
        scanf(" %[^\n]", nomes[cont]);
        printf("Digite media: ");
        scanf(" %f", &media[cont]);
    }
}
int main(){
    char nomes[TOT][MAXC], nomePesq[MAXC];
    float medias[TOT];
    int pos;
    leitura(nomes,medias);
    printf("Digite nome a ser pesquisado. Fim para encerrar: ");
    scanf(" %[^\n]", nomePesq);
    while(strcmp(nomePesq,"Fim")!=0){
        pos=busca(nomes,nomePesq);
        if(pos == -1)
            printf("Aluno inexistente");
        else
            printf("Media: %f", medias[pos]);
        printf("Digite nome a ser pesquisado. Fim para encerrar: ");
        scanf(" %[^\n]", nomePesq);
    }
    return 0;
}