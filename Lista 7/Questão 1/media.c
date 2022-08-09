
Questão 1. Faça uma função que receba como parâmetros uma matriz 30 X 4 de números reais, já preenchida, contendo
as 4 notas das provas de cada aluno de uma turma e a quantidade de alunos da turma. A função deverá
exibir a média de cada aluno. A função deverá exibir também a média de cada prova.

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
        printf("\nMedia do aluno %d: %.1f", i+1, media);
    }
    for(k=0;k<C;k++){
        somaProva=0;
        for(i=0;i<L;i++)
            somaProva+=M[i][k];
        media=somaProva/L;
        printf("\nMedia da prova %d: %.1f", k+1, media);
    }
}

Questão 1: Faça uma função que receba como parametros uma matriz 50x3, já preenchida, contendo as tres notas de cada aluno.
Esta funçao devera calcular e exibir a média de cada aluno. Esta funçao devera tambem calcular e exibir a media de cada prova.

void medias(float notas[][3]){
    int i,k;
    for(i=0;i<50;i++){
      soma=0;
      for(k=0;k<50;k++){
        soma+=notas[i][k];
      }
      media=soma/k;
      printf("\nMedia do aluno %d: %.1f", i+1, media);
    }
    for(k<0;k<50;k++){
      soma=0;
      for(i=0;i<50;i++){
        soma+=notas[i][k];
      }
      media=soma/i;
      printf("\nMedia da prova %d: %.1f", k+1, media); 
    }
}
