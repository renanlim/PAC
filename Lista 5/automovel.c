#include <stdio.h>
#define TOT 5

int le_valida_classificacao(){
    int class;
    do{
        printf("Escolha uma classificacao de 1 a 4: ");
        scanf("%d", &class);
    }while(class<1||class>4);
    return class;
}
void classe(int class, int *qtdMin, int *qtdMax){
    switch(class){
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
                break;
    }
}
int main(){
    int cont, cod, qtdMin, qtdMax, class;
    for(cont=0;cont<TOT;cont++){
        printf("Informe o codigo: ");
        scanf("%d",&cod);
        class = le_valida_classificacao();
        classe(class, &qtdMin, &qtdMax);
        printf("Quantidade minima: %d", qtdMin);
        printf("Quantidade maxima: %d", qtdMax);
    }
    return 0;
}