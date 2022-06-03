#include <stdio.h>

int leValidaQtd(){
    int qtdfunc;
    printf("Quantidade de funcionarios: ");
    scanf("%d", &qtdfunc);
    if(qtdfunc > 0)
        return qtdfunc;
}
int funcionarios(int qtdfunc){
    int matr, i = 1;
    float totSal = 0, sal;
    while(i <= qtdfunc){
        printf("Matricula e salario: ");
        scanf("%d%f", &matr, &sal);
        i++;
        totSal += sal;
    }
    return totSal;
}
int main(){
    
    int qtdFunc = leValidaQtd();
    if(qtdFunc != 0)
        printf("Soma dos salarios: %d",funcionarios(qtdFunc));
    return 0;
}
