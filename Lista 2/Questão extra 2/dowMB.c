#include <stdio.h>

float processarDow(int qtdDow){
    int i=1;
    float tam, tam2MB = 0, tamTot = 0;
    while(i <= qtdDow){
        printf("Qual o tamanho: ");
        scanf("%f", &tam);
        if(tam <= 2){
            tam2MB++;
        }
        printf("Download de até 2MBytes: %f", tam2MB);
        i++;
        tamTot += tam;
    }
    return tamTot;
}
int main(){
    int usu = 0, tamTotal = 0, dowDes;
    float preco, valor, valorMedio;
    printf("Informe o preço: ");
    scanf("%f", &preco);
    printf("Informe a quantidade de download desejada: ");
    scanf("%d", &dowDes);
    while(dowDes != 0){
        tamTotal += processarDow(dowDes);
        valor = tamTotal * preco;
        printf("Informe a quantidade de download desejada: ");
        scanf("%d", &dowDes);
        usu++;
    }
    valorMedio = valor / usu;
    printf("Valor medio: %f", valorMedio);
    return 0;
}