2. Faça uma função que receba como parâmetros uma matriz 6 X 12 de inteiros, já preenchida, contendo a
quantidade mensal vendida do carro Gol nos anos de 2010 a 2015 e um vetor contendo o preço do carro
nos anos de 2010 a 2015. A função deverá exibir o valor total das vendas do carro Gol em cada ano (2010 a
2015).
void venda_carro( int qtd[][12], float preco[]){
    int i,k;
    int C=12;
    int L=6;
    int soma;
    for ( i = 0; i < L; i++){
        soma=0;
        for(k = 0; k < C; k++){
            soma+=qtd[i][k];
            valor=soma*preco[i];
            printf("Ano %d: %f", i+2010, valor);
        }
    }
}
Questão 2: Faça uma função que receba como parametros uma matriz 5x12, de inteiros, já preenchida, contendo a quantidade mensal 
vendida de um carro nos anos 2015 a 2019 e um vetor, já preenchido, contendo o preço do carro nos anos de 2015 a 2019. 
A funçao devera calcular e exibir o valor total de cada venda em cada ano.

void venda(int qtd[5][12], float preco[]){
  int i,k;
  int soma;
  for(i=0;i<5;i++){
    soma=0;
    for(k=0;k<12;k++){
     soma+=qtd[i][k];
     valor=soma*preco[i];
     printf("\nValor total da venda no ano %d: %.2f", i+2015, valor); 
    }   
  } 
}
