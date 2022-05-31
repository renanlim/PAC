#include <stdio.h>

int funcionarios (int qtdFunc){
    int matr, i;
    float maior, sal;
    i = 1;
    maior = 0;
    while (i <= qtdFunc){
        printf ("Matricula e salario: ");
        scanf ("%d%f", &matr, &sal);
        i++;
        if (sal > maior) {
            maior = sal;
        }
    }
    return maior;
}
int main (){
    int qtdFunc;
    printf ("Quantidade de funcionarios: ");
    scanf ("%d", &qtdFunc);

    printf ("Maior salario: %d",funcionarios (qtdFunc));
    return 0;
}