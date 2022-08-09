5) Faça um programa para processar os 500 funcionários de uma empresa. Para cada funcionário, o programa
deverá ler o código do departamento no qual ele trabalha (número inteiro de 1 a 10) e o salário. O programa
deverá exibir o salário médio de cada departamento. Faça as seguintes funções:
a) inicializa(): recebe como parâmetro um vetor de struct e inicializa-o apropriadamente.
b) exibe(): recebe como parâmetro um vetor de struct já preenchido e exibe o salário médio de cada
departamento.

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
