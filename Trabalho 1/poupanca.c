#include <stdio.h>
/* Grupo: Victor F. Ferreira, Renan Alves Lima, Gabriel Stefan Viola Tesliuk Gomes*/
float validaDeposito(float valInDep, float sal){
    float percentualMaxDep;
    percentualMaxDep = (valInDep*100)/sal;
    while(percentualMaxDep <=0 || percentualMaxDep > 20){
        printf("Valor inválido\n");
        printf("Infome um novo valor de deposito: ");
        scanf("%f", &valInDep);
        percentualMaxDep = (valInDep*100)/sal;
    }
    return valInDep;
}
int main(){
    int i=1, j=0, n;
    float valDep=0, tot=0, percentualValDep, sal, valInDep, novoValDep, maior = 0;
    while(i<=50){
        printf("Informe o salário, quantidade de semanas(n) e o valor inicial do depósito: ");
        scanf("%f%d%f", &sal, &n, &valInDep);
        novoValDep = validaDeposito(valInDep, sal);
        j=0;
        tot=0;
        valDep=0;
        while(j<n){
            valDep+=novoValDep;
            percentualValDep = (valDep * 100)/sal;
            if(percentualValDep > 20){
                valDep = novoValDep;
            }
            tot+= valDep;
            j++;
            printf("Semana %d: %.1f\n", j, valDep);
        }
        if(tot > maior){
            maior = tot;
        }
        i++;
        printf("Maior valor: %.1f\n", maior);
        printf("Valor total a ser depositado: %.1f\n", tot);
    }
    return 0;
}