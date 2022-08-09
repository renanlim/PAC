4. Faça um programa, utilizando a função abaixo, que inicialmente leia o nome (máximo 30 caracteres) e a
média de cada aluno de uma turma que possui 30 alunos. A seguir, o programa irá permitir que sejam
realizadas consultas da seguinte forma: o usuário informa o nome a ser pesquisado e obtém como resposta
a média do aluno (se encontrado) ou a mensagem “Aluno inexistente” (se não encontrado). Término das
consultas: nome = “Fim”. Faça a função leitura que recebe como parâmetros um vetor de string (matriz de
caracteres) e um vetor de números reais. Esta função irá ler os dados dos 30 alunos guardando-os nos
vetores recebidos como parâmetros.
    
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

Questão 4: Faça um programa para processar 30 alunos, para cada aluno o programa devera ler o nome (cada nome possui no max 40 caracteres),
e as duas notas, calcular a media e exibir o nome a media e a situaçao (acima da media da turma, na media da turma ou abaixo da media)
.Este programa devera utilizar a funçao exibe que recebe como parametros um vetor de string (ou seja, uma matriz de caracteres), 
um vetor de numeros reais, ambos já preenchidos, e a media da turma. Esta funçao exibe para cada aluno o nome, a media e a situaçao.

#include <stdio.h>
#define TOT 30
#define MAXC 41

void exibe(char nomes[][MAXC], float medias[], float mdTurma){
    int cont;
    for(cont=0;cont<TOT;cont++){
        printf("\nNome: %s", nomes[cont]);
        printf("\tMedia: %.1f", medias[cont]);
        if(medias[cont]>mdTurma)
            printf("\tAcima da media da turma");
        else
            if(medias[cont]==mdTurma)
                printf("\tNa media da turma");
            else
                printf("\tAbaixo da media da turma");
    }
}
int main(){
    char nomes[TOT][MAXC];
    float medias[TOT], soma=0, nota1, nota2, mdTurma;
    int cont;
    for(cont=0;cont<TOT;cont++){
        printf("Digite nome: ");
        scanf(" %[^\n]",&nomes[cont]); //tem o & porque eu quero guardar o endereço da linha
        printf("Digite as duas notas: ");
        scanf("%f%f",&nota1,&nota2);
        medias[cont]=(nota1+nota2);
        soma+=medias[cont];
    }
    mdTurma=soma/TOT;
    exibe(nomes, medias, mdTurma);
    return 0;
}
