#include <stdio.h>

//tabuada de 1 a 10

void tabuada (int N) {
    int calc, i;
    i = 1;
    while (i <= 10){
        calc = N * i;
        printf ("%d * %d = %d\n", N, i, calc);
        i++;
    }
}
int main (){

    int num = 1;
    while (num <= 10){
        tabuada (num);
        num++;
    }
    return 0;
}

//tabuada qualquer valor

    /*void tabuada (int N) {
        int calc, i;
        i = 1;
        while (i <= 10){
            calc = N * i;
            printf ("%d * %d = %d\n", N, i, calc);
            i++;
        }
    }
    int main (){
        int num;
        printf ("Digite um numero: ");
        scanf ("%d", &num);
        tabuada (num);
        return 0;
    }*/