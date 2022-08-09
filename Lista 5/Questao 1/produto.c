1) Faça apenas as duas funções auxiliares abaixo.
a) Faça a função le_valida_tipo que leia e valide o tipo do produto (1-fruta, 2-legume, 3-verdura). A função
deverá retornar o tipo validado.
b) Faça uma função, utilizando a função acima, que receba a quantidade de produtos comercializados por
uma loja como parâmetro. A função deverá ler para cada produto o código e o tipo (1-fruta, 2-legume,
3-verdura), descobrir a quantidade de produtos que são do tipo 1, a quantidade de produtos que são do
tipo 2 e a quantidade de produtos que são do tipo 3. Para isto a função irá guardar as quantidades nas
variáveis cujos endereços são fornecidos na chamada da função

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
