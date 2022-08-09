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