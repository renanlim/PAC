5. Uma loja possui as seguintes informações:
• Sobre os 20 produtos comercializados:
o o código do produto (inteiro)
o o nome do produto (máximo de 20 caracteres válidos)
o a quantidade em estoque do produto (inteiro)
	
• Sobre as movimentações:
o o código do produto (inteiro)
o o tipo de operação (caracter): ‘s’ (solicitação) ou ‘d’ (devolução)
o a quantidade solicitada ou devolvida do produto (inteiro)
Término da leitura das movimentações: código do produto = 0.
	
Faça um programa que leia as informações acima e:
• atualize a quantidade em estoque dos produtos;
• exiba na tela, para cada produto, código do produto, nome do produto, a quantidade total solicitada, a
quantidade total pendente, a quantidade total devolvida e quantidade atual em estoque após as
movimentações;
• ao final, exiba quantos produtos estão com o estoque zerado.
Observação: quantidade pendente em uma solicitação é a quantidade que não foi atendida pelo fato da
quantidade em estoque do produto ser inferior à quantidade solicitada. Exemplo:
quantidade em estoque do produto = 20, quantidade solicitada = 50 ➔ quantidade pendente = 30.
	
Obrigatoriamente, o seu programa deverá utilizar as seguintes funções auxiliares feitas por você:
a) le_dados_produtos: realiza a leitura dos dados dos 20 produtos comercializados, preenchendo os
parâmetros recebido;
b) gera_saida: recebe, como parâmetros, todas as informações para gerar as saídas na tela.
c) pelo menos mais uma função, além da main.
	
#include<stdio.h>
#define TOT 20
#define MAXC 21
#define COL 4
struct produto
{
	int cod;
	char nome[MAXC];
};
typedef struct produto Tprod;
void le_dados_produtos(Tprod v[], int mat[][COL])
{
	int i;
	for(i = 0; i < TOT; i++)
	{
		printf("Digite codigo: ");
		scanf("%d", &v[i].cod);
		printf("Digite nome: ");
		scanf(" %[^\n]", v[i].nome);
		printf("Digite quantidade: ");
		scanf("%d", &mat[i][COL - 1]);
	}
}
void inicializa(int mat[][COL])
{
	int i, k;
	for(i = 0; i  < TOT; i++)
	{
		for(k = 0; k < COL - 1; k++)
		{
			mat[i][k] = 0;
		}
	}
}
void gera_saida(Tprod v[], int mat[][COL])
{
	int i, k;
	printf("\nCodigo\tNome\t\t\tSolicitada\tPendente\tDevolvida\tAtual");
	for(i = 0; i  < TOT; i++)
	{
		printf("\n%d\t%-20s", v[i].cod, v[i].nome);
		for(k = 0; k < COL; k++)
		{
			printf("\t%d", mat[i][k]);
		}
	}
}
int busca(Tprod v[], int elemproc)
{
	int i;
	for(i = 0; i < TOT; i++)
	{
		if(v[i].cod == elemproc)
			return i;
	}
	return -1;
}
int estoque_zerado(int mat[][COL])
{
	int i, zerado = 0;
	for(i = 0; i < TOT; i++)
		if(mat[i][3] == 0)
			zerado++;
	return zerado;
}
int main()
{
	Tprod v[TOT];
	int mat[TOT][COL], codmov, qtdmov, pos, zerado;
	char tipo;
	inicializa(mat);
	le_dados_produtos(v, mat);
	printf("Digite codigo do produto (movimentacao): ");
	scanf("%d", &codmov);
	while (codmov != 0)
	{
		printf("Digite o tipo de operacao (s ou d): ");
		scanf(" %c", &tipo);
		printf("Digite quantidadde (movimentacao): ");
		scanf("%d", &qtdmov);
		pos = busca(v, codmov);
		if(pos != -1)
			if(tipo == 's')
			{
				mat[pos][0] += qtdmov;
				if(mat[pos][3] >= qtdmov )
					mat[pos][3] -= qtdmov;
				else
				{
					mat[pos][2] += qtdmov - mat[pos][3];
					mat[pos][3] = 0;
				}
			}	
			else
			{
				mat[pos][2] += qtdmov;
				mat[pos][3] += qtdmov;
			}
				
		printf("Digite codigo do produto (movimentacao): ");
		scanf("%d", &codmov);
	}
	gera_saida(v, mat);
	zerado = estoque_zerado(mat);
	printf("\nQuantidade produtos estoque zerado: %d", zerado);
	return 0;
}
