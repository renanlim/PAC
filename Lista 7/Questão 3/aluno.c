3. Faça um programa, utilizando a função abaixo, para processar os 20 alunos de uma turma. Para cada aluno,
o programa deverá ler o nome (máximo 30 caracteres) e as 2 notas, calcular a média e exibir o nome, a
média e a situação (acima da média da turma, na média da turma ou abaixo da média da turma). Faça a
função exibe que recebe como parâmetros um vetor de struct e a média da turma. Esta função exibe o
nome, a média e a situação de cada aluno.
    
#include <stdio.h>
#define ALU 20
#define MAXC 31
struct aluno{
    float mediaAluno;
    char nome[MAXC];
};
typedef struct aluno Taluno;

void exibe(Taluno v[], float mediaTurma){
    int cont;
    for(cont=0;cont<ALU;cont++){
        printf("\nNome: %s", v[cont].nome);
        printf("\tMedia aluno: %.1f", v[cont].mediaAluno);
        if(v[cont].mediaAluno>mediaTurma)
            printf("\tAcima da media da turma");
        else
            if(v[cont].mediaAluno==mediaTurma)
                printf("\tNa media da turma");
            else
                printf("\tAbaixo da media da turma");
    }
}
int main(){
    Taluno aluno[MAXC];
    float nota1, nota2, soma=0, md, mediaAluno, mediaTurma;
    int cont;
    for(cont=0;cont<ALU;cont++){
        printf("Digite nome: ");
        scanf(" %[^\n]", aluno[cont].nome);
        printf("Digite as duas notas: ");
        scanf("%f%f",&nota1, &nota2);
        mediaAluno=(nota1+nota2)/2;
        aluno[cont].mediaAluno=mediaAluno;
        soma+=mediaAluno;
        mediaTurma=soma/ALU;
    }
    exibe(aluno, mediaTurma);
    return 0;
}
Questão 3: Faça um programa utilizando a funçao abaixo que leia para cada aluno um nome (no max 40 caracteres) e as duas notas
Calcule a media e exiba o nome, a media e a situacao (aprovado - media>=5 ou reprovado - media <5). Faça a funçao situaçao que
recebe como parametro a media um aluno e exiba a sua situaçao. A turma possui 30 alunos.

#include <stdio.h>
#define TOT 30
#define MAXC 41

void situacao(float md){
    if(md>=5)
      printf("\nAprovado");
    else
      printf("\nReprovado");
}
int main(){
    char nome[MAXC];
    int cont;
    float nota1, nota2, md;
    for(cont=0;cont<TOT; cont++){
        printf("Digite o nome: ");
        scanf(" %[^\n]", nome);
        printf("Digite as 2 notas: ");
        scanf("%f%f",&nota1,&nota2);
        md=(nota1+nota2);
        printf("\nNome: %s\tMedia: %.1f", nome, md);
        situacao(md);
    }
    return 0;
}
