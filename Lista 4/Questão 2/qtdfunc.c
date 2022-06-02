#include <stdio.h>

int funcionarias(int qtdfunc){
    int matr, i = 1, cont = 0;
    float sal;
    char sexo;
    while(i <= qtdfunc){
        printf ("Matricula, Sexo (M/F) e Salario: ");
        scanf ("%d %c%f", &matr, &sexo, &sal);
        i++;
        if(sexo == 'F')
            cont++;
    }
    return cont;
}
int main(){
    int qtd;
    printf("Quantidade de funcionarios: ");
    scanf("%d", &qtd);
    printf("Quantidade de funcionarias: %d\n", funcionarias(qtd));
    return 0;
}
