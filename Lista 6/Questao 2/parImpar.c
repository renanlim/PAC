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