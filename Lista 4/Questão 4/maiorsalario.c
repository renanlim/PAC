#include <stdio.h>

int dadosFunc (int qtdFunc){
    int matr, i = 1;
    float maior = 0, sal;
    while (i <= qtdFunc){
        printf ("Matricula e salario: ");
        scanf ("%d%f", &matr, &sal);
        if (sal > maior) {
            maior = sal;
        }
        i++;
    }
    return maior;
}
int main (){
    int qtd;
    printf ("Quantidade de funcionarios: ");
    scanf ("%d", &qtd);

    printf ("Maior salario: %d",dadosFunc(qtd));
    return 0;
}