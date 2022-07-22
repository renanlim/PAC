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