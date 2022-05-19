#include <stdio.h>

int calcula_salario (int valorhoratrab, int quanthoratrab)
{
    int hora, totsalario;
    valorhoratrab = hora * 91;
    totsalario = valorhoratrab * quanthoratrab;
    printf ("\nMeu salário base é de: %d\n", totsalario);
    return totsalario;
}   

float calcula_salario_base (float valorhoratrab, float qtdhoras)
{
   float sal;
   sal = valorhoratrab * qtdhras;
   printf ("\nMeu salário base é de: %.2f\n", sal);
   return sal;
}
