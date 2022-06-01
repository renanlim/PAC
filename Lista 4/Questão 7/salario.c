#include <stdio.h>

int menu(){
    int opcao;
    do{
        printf("\n1 - Horista\n2 - Contratado\n3 - Prestador de serviço");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);
    } while(opcao < 1 || opcao > 3);
    return opcao;
}
float salario(int opcao){
    switch (opcao)
    {
    int qtdServ;
    float valHora, qtdHoras, valServ, sal, calSal;
    case 1: printf("Valor da hora de trabalho e quantidade de horas trabalhadas: ");
            scanf("%f%f", &valHora, &qtdHoras);
            calSal = valHora * qtdHoras;
            printf("Salario: %f", calSal);

             break;
    case 2: printf("Salário: ");
            scanf("%f", &sal);
            printf("Seu Salario: %f", sal);
            break;
    case 3: printf("Quantidade de serviço prestado: ");
            scanf("%d", &qtdServ);
            int i = 1;
            float totValServ = 0;
            while(i <= qtdServ){
                printf("Valor de cada serviço: ");
                scanf("%f", &valServ);
                totValServ += valServ;
                i++;
             }
             printf("Salario: %f", totValServ);
             break;   
    }
}
int main(){
    int i = 1, escolha;
    float calculo;
    while(i <= 20){
        escolha = menu(i);
        calculo = salario(escolha);
        i++;
    }
    return 0;
}