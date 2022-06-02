#include <stdio.h>

float calculaSalBase(float valorh, float qtdh)
{
    return valorh * qtdh;
}
float calculaBonus(int temposerv, float salbase)
{
    return 0.02 * salbase * temposerv;
}
float calculaAuxCreche(int quantdep)
{
    return 55.0 * quantdep;
}
float calculaDescontoINSS(float salbase)
{
    float descontoINSS;
    descontoINSS = salbase * 0.11;
    if (descontoINSS > 450.27)
        descontoINSS = 450.27;
    return descontoINSS;
}
float calculaImpostoRenda(float salbase)
{
    float descontoIR;
    if(salbase <= 1800)
        descontoIR = 0;
    else
        if(salbase <= 2900)
            descontoIR = 0.15 * salbase;
        else 
            descontoIR = 0.275 * salbase;
      return descontoIR;
}
int main()
{
    int matr, quantdep,temposerv;
    float valorh, qtdh, salLiquido, salbase, descontoIR, descontoINSS;
    printf("\nInforme a matricula, valor da hora de trabalho, quantidade de horas trabalhadas, quantidade de dependentes e tempo de serviço (anos): ");
    scanf("%d%f%f%d%d", &matr, &valorh, &qtdh, &quantdep, &temposerv);
    
    printf("\nMatricula: %d", matr);
    salbase = calculaSalBase (valorh, qtdh);
    printf("\nSalario base: %.1f\tBonus: %.1f\tAuxilio creche: %.1f", salbase, calculaBonus (temposerv, salbase), calculaAuxCreche (quantdep));
    printf("\nDesconto INSS: %.1f\tDesconto Imposto de Renda: %.1f", calculaDescontoINSS (salbase), calculaImpostoRenda (salbase));
    descontoINSS = calculaDescontoINSS (salbase);
    descontoIR = calculaImpostoRenda (salbase);
    salLiquido = salbase + calculaBonus (temposerv, salbase) + calculaAuxCreche (quantdep) - descontoIR - descontoINSS;
    printf ("\nSalario liquido: %.1f\n", salLiquido);

return 0;
}
