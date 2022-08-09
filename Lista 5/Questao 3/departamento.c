3) Faça um programa, utilizando a função abaixo, que exiba o maior salário de cada departamento de uma
empresa e quantos funcionários ganham o maior salário do departamento. Para cada departamento, o
programa deverá ler o código do departamento e a quantidade de funcionários, e para cada funcionário, a
matrícula e o salário. Término da leitura dos departamentos: código do departamento = 0.
a) Faça a função um_departamento para processar os funcionários de um departamento. Esta função
deverá receber como parâmetro a quantidade de funcionários do departamento, ler os dados de cada
funcionário, descobrir o maior salário do departamento e quantos funcionários ganham este maior
salário, armazenando-os nas variáveis cujos endereços são fornecidos na chamada da função

#include <stdio.h>

void um_departamento(int qtdFunc, float *maior, int *salMaiores){
    int cont, matr;
    float sal;
    *salMaiores=0;
    *maior=0;
    for(cont=0;cont<qtdFunc;cont++){
        printf("Informe matricula e salario: ");
        scanf("%d%f", &matr, &sal);
        if (sal > *maior){
            *maior = sal;
            (*salMaiores) = 1;
        }else{
            if(sal == *maior)
            (*salMaiores)++;
        }
    }
}
int main(){
    int cod, qtdFunc, salMaiores, i=0;
    float maior;
    printf("Informe o código do departamento(0 para encerrar): ");
    scanf("%d", &cod);
    while(cod!=0){
        printf("Informe a quantidade de funcionarios: ");
        scanf("%d", &qtdFunc);
        um_departamento(qtdFunc, &maior, &salMaiores);
        printf("Informe o código do departamento(0 para encerrar): ");
        scanf("%d", &cod);
        printf("Maior salario: %f", maior);
        printf("Quantidade que recebem maiores salarios: %d", salMaiores);
    }
    return 0;
}
