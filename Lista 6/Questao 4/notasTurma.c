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