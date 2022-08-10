#include <stdio.h>
#define FUNC 500
#define TOT 10
struct func{
    int soma;
    float qtd;
};
typedef struct func Tfunc;

void inicializa(Tfunc v[]){
    int cont;
    for (cont = 0; cont < FUNC; cont++)
        v[cont].soma=0;
        v[cont].qtd=0;
}
void exibe(Tfunc v[]){
    int cont;
    for (cont = 0; cont < FUNC; cont++){
        if(v[cont].qtd!=0)
            media=v[cont].soma/v[cont].qtd;
        else
            media=0;
        printf("\nDepartamento %d: %.2f",cont+1, media);
    }
}
int main(){
    Tfunc func[TOT];
    int cont, cod;
    float sal;
    inicializa(func);
    for (cont = 0; cont < FUNC; cont++){
        printf("Digite codigo (1 a 10): ");
        scanf("%d", &cod);
        printf("Digite salario: ");
        scanf("%f", &sal);
        func[cod-1].soma+=sal;
        func[cod-1].qtd++;
    }
    exibe(func);
    return 0;
}