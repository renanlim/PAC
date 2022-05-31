#include <stdio.h>

int validacao(int valor){
    int validacao = 10;
    if(valor > validacao){
        return 1;
    }

    return 0;
}

int main(){

    int n;
    float valor;
    printf("Digite uma qtd para iterar: \n");
    scanf("%d", &n);

    int i = 1;
    while( i <= n){
        printf("Digite um valor:");
        scanf("%f", &valor);

        if(validacao(valor)){
            i++;
        };
    }

    return 0;
}

