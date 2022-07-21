#include <stdio.h>
//exemplo do meu mais mais
int main(){
    int x = 7;
    int *y = &x;
    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de y (endereço de x): %p\n", y);
    printf("Endereço de y: %p\n", &y);
    printf("Referencia a variavel x: %d\n", *y);
    printf("Referencia a variavel x: %d\n", *&x);

}