2) Faça um programa, utilizando a função abaixo, para processar os 40 alunos de uma turma. Para cada aluno
o programa deverá ler a matrícula e as duas notas, calcular a média e exibir a matrícula, a média e a situação
do aluno (“aprovado”: média >= 5,0 ou “reprovado”: média < 5,0). Ao final o programa deverá exibir a
quantidade de alunos aprovados e a quantidade de alunos reprovados da turma. Faça uma função que
receba a média de um aluno, exiba a sua situação e contabilize este aluno nos aprovados ou nos reprovados.
A função irá contabilizar os aprovados e os reprovados nas variáveis cujos endereços são fornecidos na
chamada da função.

#include <stdio.h>
#define TOT 40

void situacao(float media, int *alunoApro, int *alunoRepro){
    if(media>=5){
        printf("Aprovado");
        (*alunoApro)++;
    }
    else{
        printf("Reprovado");
        (*alunoRepro)++;
    }
}
int main(){
    int matr, alunoApro=0, alunoRepro=0, cont;
    float n1, n2, media;
    for(cont=0;cont<TOT;cont++){
        printf("Informe matricula e duas notas: ");
        scanf("%d%f%f", &matr, &n1, &n2);
        media = (n1+n2)/2;
        printf("Matricula: %d", matr);
        printf("Media: %f", media);
        situacao(media, &alunoApro, &alunoRepro);
    }
    printf("Total alunos aprovados: %d", alunoApro);
    printf("Total alunos reprovados: %d", alunoRepro);
    return 0;
}
