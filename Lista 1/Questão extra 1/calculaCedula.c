#include <stdio.h>

void calculaCedula(int valSacado){
    int saque = 0;
    printf("Cedulas de R$ 100: %d", valSacado/100);
    saque = valSacado%100;
    printf("Cedulas de R$ 50: %d", saque/50);
    saque = saque%50;
    printf("Cedulas de R$ 20: %d", saque/20);
    saque = saque%20;
    printf("Cedulas de R$ 10: %d", saque/10);
    saque = saque%10;
    printf("Cedulas de R$ 5: %d", saque/5);
    saque = saque%5;
    printf("Cedulas de R$ 2: %d", saque/2);
    saque = saque%2;
    printf("Cedulas de R$ 1: %d", saque);
}
int main(){
    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);
    calculaCedula(valor);
    return 0;
}