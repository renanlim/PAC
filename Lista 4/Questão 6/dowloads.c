#include <stdio.h>

float processarDow(int qtdDow){
    int i = 1;
    float tamDow, tamDow2MB = 0, tamTotDow = 0;
    while(i <= qtdDow){
        printf("Qual tamanho do download: ");
        scanf ("%f", &tamDow);
        if(tamDow <= 2){
            tamDow2MB++;
        }
        tamTotDow = tamTotDow + tamDow;
        i++;
    }
    printf("Dowloads de até 2MB: %f", tamDow2MB);
    return tamTotDow;
}
int main(){
    int usu = 0, qtdDowDes = 1;
    float tamanho = 0, valorMedio, valor, preco;
    printf("Qual o preço do MBYTE: ");
    scanf("%f", &preco);
    printf("Quantidade de dowload desejada: ");
    scanf("%d", &qtdDowDes);
    while (qtdDowDes != 0){
        tamanho = tamanho + processarDow(qtdDowDes);
        printf("Quantidade de dowload desejada: ");
        scanf("%d", &qtdDowDes);
        usu++;
    }
    valor = tamanho * preco;
    printf("Valor pago: %f", valor);
    valorMedio = valor / usu;
    printf("Valor médio: %f", valorMedio);
    return 0;
}