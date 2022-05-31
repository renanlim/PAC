#include <stdio.h>

int leValidaQtd (){
    int qtdfunc;
    printf ("Quantidade de funcionarios: ");
    scanf ("%d", &qtdfunc);
    if (qtdfunc > 0){
        return qtdfunc;
    }
    printf ("Quantidade invalida");
    return 0;
}
int funcionarios (int qtdfunc){
    int matr, i;
    float totSal, sal;
    i = 1;
    totSal = 0;
    while (i <= qtdfunc){
        printf ("Matricula e salario: ");
        scanf ("%d%f", &matr, &sal);
        i++;
        totSal = totSal + sal;
    }
    return totSal;
}
int main (){
    
    int qtdFunc = leValidaQtd ();
    if (qtdFunc != 0){
        printf ("Soma dos salarios: %d",funcionarios (qtdFunc));
    }
    return 0;
}