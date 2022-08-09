4) Uma loja que comercializa peças de automóvel possui as seguintes informações de cada peça: código e
classificação da peça. As peças são classificadas de acordo com a tabela abaixo que não deverá ser lida:

Classificacao Quantidade minima Quantidade maxima em estoque
    1                  100                 120
    2                  150                 180
    3                  200                 250
    4                  250                 300
Faça um programa, utilizando as funções abaixo, para processar as 100 peças comercializadas. Para cada
peça, o programa deverá ler os dados e exibir o seu código, a quantidade mínima e a quantidade máxima
em estoque. Faça a seguinte função:
a) le_valida_classificacao() → para ler, validar e retornar a classificação validada. A classificação é um
número inteiro de 1 a 4.
b) classe() → recebe como parâmetro a classificação da peça e guarda as quantidades mínima e máxima
em estoque nas variáveis cujos endereços são fornecidos na chamada da função.

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
