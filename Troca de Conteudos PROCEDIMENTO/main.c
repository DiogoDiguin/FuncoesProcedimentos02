/*
Escreva um procedimento que receba por refer�ncia duas vari�veis inteiras. O procedimento deve trocar o conte�do das duas
vari�veis.
*/

#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main (){
    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

printf (" %d   %d\n",n1,n2);

troca (&n1,&n2);
printf (" %d   %d\n",n1,n2);
}
