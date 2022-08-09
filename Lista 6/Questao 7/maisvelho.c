7) Faça um programa para processar os 1000 funcionários de uma empresa. Para cada funcionário, o programa
deverá ler o código do departamento no qual ele trabalha (número inteiro de 10 a 20) e a idade. O programa
deverá exibir a matrícula e a idade do funcionário mais velho de cada departamento. Faça as seguintes
funções:
a) inicializa(): recebe como parâmetro um vetor de struct e inicializa-o apropriadamente.
b) exibe(): recebe como parâmetro um vetor de struct já preenchido e exiba a matrícula e a idade do
funcionário mais velho de cada departamento.

#include <stdio.h>
#define TOT 11
#define FUNC 1000;
struct depto{
    int matr;
    int idade;
};
typedef struct depto Tdepto;

void inicializa(Tdepto v[]){
    int cont;
    for(cont=0;cont<FUNC;cont++)
        v[cont].idade=0;
}
void exibe(Tdepto[]){
    int cont;
    for(cont=0;cont<FUNC;cont++){
       printf("\nDepartamento: %d", cont+10);
       printf("\nMatricula do mais velho: %d", v[cont].matr);
       printf("\nIdade do mais velho: %d", v[cont].idade);
    }
}
int main(){
    Tdepto velho[TOT];
    int cont, cod, idade, matr;
    inicializa(velho);
    for(cont=0;cont<FUNC;cont++){
        printf("\nDigite codigo(10 a 20),idade e matricula: ");
        scanf("%d%d%d",&cod,&idade,&matr);
        if(idade>velho[cod-10].idade){
            velho[cod-10].idade=idade;
            velho[cod-10].matr=matr;
        }
    }
    exibe(velho);
    return 0; 
    
}
