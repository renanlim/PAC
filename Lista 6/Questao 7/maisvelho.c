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