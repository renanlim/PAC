#include <stdio.h>

float calcFunc(int qtdFunc){
    int i=1, matr, sexo, funcionarias=0;
    float sal;
    while(i<=qtdFunc){
        printf("Informe matricula, sexo(1-feminino, 2-masculino) e salario: ");
        scanf("%d%d%f", &matr, &sexo, &sal);
        if(sexo==1){
            funcionarias++;
        }
        i++;
        return funcionarias;
    }
}
int main(){
    int i=1, tot=0, qtdFunc;
    printf("Informe quantidade de funcionarios: ");
    scanf("%d", &qtdFunc);
    while(i<=qtdFunc){
        tot += calcFunc(qtdFunc);
        i++;
    }
    printf("Quantidade de funcionarias: %d", tot);
    return 0;
}