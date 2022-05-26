#include <stdio.h>

float calculaSalBase ( float valorh, float qtdh)
{
    float salbase = valorh * qtdh;
    return salbase;
}
float calculaBonus (float temposerv, float salbase)
{
    float bonus = 0.02 * salbase * temposerv;
    return bonus;
}
float calculaAuxCreche (int quantdep)
{
    float auxCreche = 55.0 * quantdep;
    return auxCreche;
}
float calculaDescontoINSS ( float salbase)
{
    float descontoINSS;
    if (descontoINSS = salbase * 0.11)
    {
        return descontoINSS;
    }
    else
     return descontoINSS = 450.27;
}
float calculaImpostoRenda (float salbase)
{
    float descontoIR;
    if (salbase <= 1800)
    {
        descontoIR = 0;
    }
    else
        if (salbase <= 2900)
        {
            descontoIR = 0.15 * salbase;
        }
        else 
        {
            descontoIR = 0.275 * salbase;
        }
return descontoIR;
}
int main ()
{
    int matr, quantdep,temposerv;
    float valorh, qtdh, salLiquido, salbase, descontoIR, descontoINSS;
    printf ("\nInforme a matricula: ");
    scanf ("%d", &matr);
    printf ("\nInforme o valor da hora de trabalho: ");
    scanf ("%f", &valorh);
    printf ("\nInforme a quantidade de horas trabalhadas: ");
    scanf ("%f", &qtdh);
    printf ("\nInforme a quantidade de dependentes: ");
    scanf ("%d", &quantdep);
    printf ("\nInforme o tempo de serviço (anos): ");
    scanf ("%d", &temposerv);

    printf ("\nMatricula: %d", matr);
    salbase = calculaSalBase (valorh, qtdh);
    printf ("\nSalario base: %.1f", salbase);
    printf ("\nBonus: %.1f", calculaBonus (temposerv, salbase));
    printf ("\nAuxilio creche: %.1f", calculaAuxCreche (quantdep));
    printf ("\nDesconto INSS: %.1f", calculaDescontoINSS (salbase));
    printf ("\nDesconto Imposto de Renda: %.1f", calculaImpostoRenda (salbase));
    descontoINSS = calculaDescontoINSS (salbase);
    descontoIR = calculaImpostoRenda (salbase);
    salLiquido = salbase - descontoIR - descontoINSS;
    printf ("\nSalario liquido: %.1f\n", salLiquido);

return 0;
}
