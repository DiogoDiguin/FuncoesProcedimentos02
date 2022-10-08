#include <stdio.h>
#define N 4 /*Definição do valor de N em todo o código*/

struct funcionario{
int codigo, idade;
float salario, inss, fgts, ir;
};

struct funcionario f[N];

int main (){

  for (int i = 0 ; i < N ; i++){

    printf("\nFuncionario %i", i+1);
    printf ("\n     Digite\n");
    printf("Codigo: ");
    scanf("%i", &f[i].codigo);
    printf("Idade: ");
    scanf("%i", &f[i].idade);
    printf("Salario: ");
    scanf("%f", &f[i].salario);

 }
 for (int i = 0 ; i < N ; i++)
    if (f[i].idade==34)
        printf ("\nSalario do funcionario %d = %.2f\n", i+1, f[i].salario);
}
