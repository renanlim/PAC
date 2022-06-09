#include <stdio.h>

float converte_moeda(float valor, float cot){
    return valor * cot;
}
int main(){
    float Do, Eu, r, d, e, cotDo, cotEu, tot;
    printf("Informe os valores das compras (em real, dólar e euro) e os 2 valores das cotações (do dólar e do euro): ");
    scanf("%f%f%f%f%f", &r, &d, &e, &cotDo, &cotEu);
    Do = converte_moeda(d, cotDo);
    Eu = converte_moeda(e, cotEu);
    tot = Do + Eu + r;
    printf("Valor total(em reais): %f", tot);
    return 0;
}
