#include <stdio.h>
#define TOT 10
#define FUNC 5
struct departamento{
    float soma;
    int qtd;
};
typedef struct departamento Tdepar;

void inicializa(Tdepar v[]){
    int cont;
    for(cont=0;cont<TOT;cont++){
        v[cont].soma=0;
        v[cont].qtd=0;
    }
}
void exibe(Tdepar v[]){
    int cont;
    float md;
    for(cont=0; cont<FUNC;cont++){
        if(v[cont].qtd!=0)
            md=v[cont].soma/v[cont].qtd;
        else
            md=0;
        printf("\nDepartamento %d: %f", cont+1, md);
    }
}
int main(){
    Tdepar v[TOT];
    int cont, cod;
    float sal;
    inicializa(v);
    for(cont=0; cont<FUNC; cont++){
        printf("Digite codigo (1 a 10) e salario: ");
        scanf("%d%f", &cod, &sal);
        v[cod-1].soma+=sal;
        v[cod-1].qtd++;
    }
    exibe(v);
    return 0;
}