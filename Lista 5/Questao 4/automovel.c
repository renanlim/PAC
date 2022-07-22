#include <stdio.h>
#define TOT 100

int le_valida_classificacao(){
    int clas;
    do{
        printf("Escolha uma classificacao de 1 a 4: ");
        scanf("%d", &clas);
    }while(clas<1||clas>4);
    return clas;
}
void classe(int clas, int *qtdMin, int *qtdMax){
    switch(clas){
        case 1: *qtdMin = 100;
                *qtdMax = 120;
                break;
        case 2: *qtdMin = 150;
                *qtdMax = 180;
                break;
        case 3: *qtdMin = 200;
                *qtdMax = 250;
                break;
        case 4: *qtdMin = 250;
                *qtdMax = 300;
    }
}
int main(){
    int cont, cod, qtdMin, qtdMax, clas;
    for(cont=0;cont<TOT;cont++){
        printf("Informe o codigo: ");
        scanf("%d",&cod);
        clas = le_valida_classificacao();
        classe(class, &qtdMin, &qtdMax);
        printf("Quantidade minima: %d", qtdMin);
        printf("Quantidade maxima: %d", qtdMax);
    }
    return 0;
}