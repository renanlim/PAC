void media( float M[][4], int qtd){
    int i,k;
    int C=4;
    int L=qtd;
    float somaNota, somaProva, media;
    for(i=0;i<L;i++){
        somaNota=0;
        for(k=0;k<C;k++)
            somaNota+=M[i][k];
        media=somaNota/C;
        printf("Media Aluno: %f", media);
    }
    for(k=0;k<C;k++){
        somaProva=0;
        for(i=0;i<L;i++)
            somaProva+=M[i][k];
        media=somaProva/L;
        printf("Media Provas: %f", media);
    }
}