#include <stdio.h>

float validaSal(){
    float sal, validacao;
    validacao = 1212;
    do {
        printf ("Salario: ");
        scanf ("%f", &sal);
    } while (sal < validacao);
    return sal;
}
float depar(int qtdFunc){
    int cont, matr, i;
    float maior, soma, sal, somaSalDep;
    i = 1;
    cont = 0;
    maior = 0;
    somaSalDep = 0;
    while (i <= qtdFunc){
        printf ("Matricula: ");
        scanf ("%d", &matr);
        sal = validaSal();
        if (sal > maior){
            maior = sal;
            cont = 1;
        }else{
            if(sal == maior)
            cont++;
        }
        somaSalDep = somaSalDep + sal;
        printf ("Matricula: %d\tSalario: %.1f", matr, sal);
        i++;
    }
    printf ("Quantidade pessoas com maior salario: %d", cont);
    return somaSalDep;
}
int main(){

    int numFunc, dep;
    float totSal = 0;
    dep = 1;
    while(dep <= 10){
        printf("Quantidade funcionarios do departamento %d: ", dep);
        scanf("%d", &numFunc);
        totSal = totSal + depar(numFunc);
        dep++;
    }
    printf("Soma salario de todos na empresa: %f", totSal);
    return 0;
}