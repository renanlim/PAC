#include <stdio.h>

float calculaPesoCubico(float c, float l, float a){
    return (c*l*a)/6.000;
}
float pesoEscolhido(float PF, float PC){
    int maior = 0;
    if(PC < 5)
        return PF;
    if(PC > PF)
        return PC;
    return PF;
}
float calculaValor(float c, float l, float a, float PF, float preco){
    float PC, peso, valor;
    PC = calculaPesoCubico(c, l, a);
    peso = pesoEscolhido(PF, PC);
    valor = preco * peso;
    return valor;
}
int main(){
    float preco, PF, c, l, a, totValPago = 0, valorPago;
    int i = 1, qtd;
    printf("Informe a quantidade de entregas e o preço básico do KG: ");
    scanf("%d%f", &qtd, &preco);
    while(i <= qtd){
        printf("Peso fisico e as dimensões do pacote (em mm): ");
        scanf("%f%f%f%f", &PF, &c, &l, &a);
        valorPago = calculaValor(c,l,a,PF,preco);
        totValPago += valorPago;
        printf("Valor pago: %f", valorPago);
        i++;
    }
    printf("Valor geral pago: %f", totValPago);
    return 0;
}