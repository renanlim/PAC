1) Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de números
armazenados no vetor. Esta função deverá retornar a média dos números.
    
float calcMedia(int v[], int qtd){
    int cont, soma;
    float media;
    soma=0;
    for(cont=0;cont<qtd;cont++)
        soma+=v[cont];
    media=(float)soma/qtd;
    return media;
}
