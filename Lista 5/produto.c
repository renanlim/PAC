#include <stdio.h>

int le_valida_tipo(){
    int tipo;
    do{
        printf("\n1-Fruta\n2-Legume\n3-Verdura");
        printf("Escolha o tipo: ");
        scanf("%d", &tipo);
    }while(tipo < 1 || tipo > 3);
    return tipo;
}

int loja(int qtdProd, int *qtdTipo1, int *qtdTipo2, int *qtdTipo3){

    int cod, tipo, cont;
    for(cont=0;cont<qtdProd;cont++){
        printf("Informe o código: ");
        scanf("%d", &cod);
        tipo = le_valida_tipo();
        switch(tipo){
        case 1: (*qtdTipo1)++;
                break;
        case 2: (*qtdTipo2)++;
                break;
        case 3: (*qtdTipo3)++;
                break;
        }
    }
}
int main(){
    int qtdProd, qtdTipo1=0, qtdTipo2=0, qtdTipo3=0;
    printf("Informe a quantidade: ");
    scanf("%d", &qtdProd);
    loja(qtdProd, &qtdTipo1, &qtdTipo2, &qtdTipo3);
    printf("%d\n", qtdTipo1);
    printf("%d\n", qtdTipo2);
    printf("%d\n", qtdTipo3);
    return 0;
}