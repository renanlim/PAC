#include <stdio.h>
#define QTDP 5
#define VENDAS 50

struct inadimplentes{
    int cpf;
    int qtd;
};
typedef struct inadimplentes Tinadi;

int leitura_SPC(Tinadi v[])
{
	int i, CPF, qtd;
	for(i = 0; i < QTDP; i++)
	{
		printf("Digite CPF: ");
        scanf("%d", &CPF);
		printf("Digite quantidade de meses inadimplentes: ");
        scanf("%d", &qtd);
        v[i].cpf=CPF;
	}
    return qtd;
}
int busca(Tinadi v[], int elemproc_CPF)
{
	int i;
	for(i = 0; i < QTDP; i++)
	{
		if(v[i].cpf == elemproc_CPF)
			return i; //posicao onde foi encontrado: cliente inadimplente
	}
	return -1; //caso não seja encontrado:  cliente não inadimplente
}

int main(){
	Tinadi v[QTDP];
	int pos, CPF, CPFCli, cod, qtdComprada, inadimplentes;
    float venda=0, preco, total;
	leitura_SPC(v);
	printf("\nDigite CPF. 0 para encerrar: ");
	scanf("%d", &CPF);
	while (CPF != 0){
		for(int cont=0;cont<VENDAS;cont++){
            printf("\nDigite CPF do cliente: ");
	        scanf("%d", &CPFCli);
            pos=busca(v, CPFCli);

            if(pos == -1){
                printf("\nDigite Codigo do produto. 0 para encerrar: ");
                scanf("%d", &cod);
                while(cod!=0){
                    printf("\nDigite Quantidade comprada: ");
                    scanf("%d", &qtdComprada);
                    printf("\nDigite Preco unitario: ");
                    scanf("%f", &preco);
                    printf("\nDigite Codigo do produto. 0 para encerrar: ");
                    scanf("%d", &cod);
                    venda++;
                    total=qtdComprada*preco;
                    printf("\nVenda %d: Valor total: %.1f", venda, total);
                }
            }
             else
                printf("\nVenda cancelada");
                inadimplentes=leitura_SPC(v);
                printf("\nCliente inadimplente a %d meses", inadimplentes);
		printf("\nDigite CPF. 0 para encerrar: ");
	    scanf("%d", &CPF);
	    }
    }
	return 0;
}

