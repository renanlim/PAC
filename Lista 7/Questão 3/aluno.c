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