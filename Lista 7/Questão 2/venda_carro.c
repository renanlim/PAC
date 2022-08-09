void venda_carro( int qtd[][12], float preco[]){
    int i,k;
    int C=12;
    int L=6;
    for ( i = 0; i < L; i++){
        valor=0;
        for(k = 0; k < C; k++){
            soma+=qtd[i][k];
            valor=soma*preco[i];
            printf("Ano %d: %f", i+2010, valor);
        }
    }
}