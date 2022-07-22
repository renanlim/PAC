float calcMedia(int *v, int qtd){
    int cont, soma;
    float media;
    soma=0;
    for(cont=0;cont<qtd;cont++)
        soma+=v[cont];
    media=(float)soma/qtd;
    return media;
}