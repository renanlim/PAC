#include <stdio.h>
#define SPC_MAX 1000
#define VENDA_TOT 50

struct SPC
{
    int cpf;
    int qtdMeses;
};

typedef struct SPC TSpc;

int leitura_SPC(TSpc v[]){
    printf("inicio leitura_SPC\n");
    int cpf;
    int qtdSpc = 0;

    printf("CPF. 0 para encerrar: ");
    scanf("%d",&cpf);

    for(int i=0; i<SPC_MAX; i++){
        if(cpf == 0){
            v[i].cpf= 0; 
            v[i].qtdMeses= 0; 
        }else{
            v[i].cpf = cpf;
            printf("Digite os meses inadimplentes:");
            scanf("%d",&v[i].qtdMeses);

            qtdSpc++;

           printf("CPF. 0 para encerrar: ");
            scanf("%d",&cpf);
        }
    };
    return qtdSpc;
    
}

int busca(TSpc v[], int cpf, int qtdInadiplentes){
    printf("inicio busca SPC\n");
    for (int i = 0; i < qtdInadiplentes; i++)
    {
        if(v[i].cpf == cpf){
            return i;
        };
    }
    return -1;
}

void main(){

    TSpc spc[SPC_MAX];
    int cpf, cod, preco, qtdProd;
    float totalVenda;

    int qtdInadiplentes = leitura_SPC(spc);

    for(int i=0; i<VENDA_TOT; i++){
        totalVenda = 0.0;
        printf("Inicio venda %d\n", i+1);
        printf("CPF:");
        scanf("%d",&cpf);
        int PosicaoInadiplente = busca(spc,cpf,qtdInadiplentes);

        if(PosicaoInadiplente == -1){
            //faz a venda porque nÃ£o achou o cliente na lista de spc
            printf("Produto\n");
            printf("COD. 0 para encerrar: ");
            scanf("%d",&cod);
            while(cod != 0){
                printf("Digite PRECO:");
                scanf("%d",&preco);
                printf("Digite QTD comprada:");
                scanf("%d",&qtdProd);

                totalVenda += preco*qtdProd;

                //Novo produto;
                printf("COD. 0 para encerrar: ");
                scanf("%d",&cod);
            };
            printf("Total da venda %0.2f\n", totalVenda);
            printf("Fim venda %d\n", i+1);
        }else{
            printf("Venda Cancelada! Cliente Inadiplente a %d meses\n",spc[PosicaoInadiplente].qtdMeses);
            printf("Fim venda %d\n", i+1);
        }
    }
}
