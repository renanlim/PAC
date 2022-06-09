#include <stdio.h>

float leValidaValor(){
    float valor;
    printf("Informe o valor contribuido: ");
    scanf("%f", &valor);
    if(valor > 0){
        return valor;
    }
    return -1;
}
int main(){
    int id, contrib = 0;
    float tot = 0, med;
    printf("Informe a identificaçao: ");
    scanf("%d", &id);
    while(id != 0){
        contrib++;
        tot+=leValidaValor();
        med=tot/50;
        printf("Informe a identificaçao: ");
        scanf("%d", &id);
    }
    printf("Controbuição média: %.1f", med);
    printf("Quantifade total de contribuições: %d", contrib);
    return 0;
}