#include <stdio.h>

float situacao(float md){
    if(md >= 8)
        printf("Aprovado");
    else
        if(md < 6)
            printf("Reprovado");
        else
            printf("Lista de espera");
}
int main(){
    float notaEscrita, notaAula, notaTitulo, med;
    int i = 1, matr;
    while(i <= 1000){
        printf("Informe a matricula e a nota da prova escrita: ");
        scanf("%d%f", &matr, &notaEscrita);
        if(notaEscrita >= 6){
            printf("Informe a nota da prova aula e titulos: ");
            scanf("%f%f", &notaAula, &notaTitulo);
            med = (notaEscrita+notaAula+notaTitulo)/3;        
        }
        else 
            med = notaEscrita;        
        i++;
        printf("Matricula: %d\tMedia: %f", matr, med);
        situacao(med);
    }
    return 0;
}