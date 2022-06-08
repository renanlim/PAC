#include <stdio.h>

float perifericos(int qtdPeri){
    int i = 1, valPago = 0;
    float valor;
    while(i <= qtdPeri){
        printf("Informe o preço: ");
        scanf("%f", &valor);
        valPago += valor;
    i++;
    }
    return valPago;
}
int main(){
    int cod, qtd, qtdSemPeri = 0, clientes = 0;
    float preco, valPeri = 0, valPagoPC = 0, valMedio = 0;
    printf("Informe o código do modelo: ");
    scanf("%d", &cod);
    while(cod != 0){
        clientes++;
        printf("Informe o preço e a quantidade de perifericos: ");
        scanf("%f%d", &preco, &qtd);
        valPeri = perifericos(qtd);
        valPagoPC += preco + valPeri;
        if(!qtd){
            qtdSemPeri++;
        }
        printf("Informe o código do modelo: ");
        scanf("%d", &cod);
    }
    if(clientes){
        valMedio = valPagoPC/clientes;
    }
    printf("Quantidade de vendas sem perifericos: %d", qtdSemPeri);
    printf("Valor medio de todas as vendas: %f", valMedio);
    return 0;
}