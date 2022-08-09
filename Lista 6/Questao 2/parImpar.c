2) Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de números
armazenados no vetor. Esta função deverá calcular a quantidade de números pares e a quantidade de
números ímpares, armazenando-as nas variáveis cujos endereços são fornecidos na chamada da função.
    
void parImpar(int *v, int qtd, int *par, int *impar){
    int cont;
    *par=*impar=0;
    for(cont=0; cont<qtd; cont++){
        if(v[cont]%2==0)
            (*par)++;
        else
            (*impar)++;
    }
}
