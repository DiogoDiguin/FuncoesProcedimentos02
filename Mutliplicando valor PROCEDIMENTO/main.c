/*
Escreva um procedimento que peça ao usuário um numero real qualquer e exiba seu dobro, triplo, quadrado e cubo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void multi (int valor){
    int quadrado, cubo;

    printf("\nDOBRO (%i * 2) do valor: %.i \n", valor, valor*2);
    printf("TRIPLO (%i * 3) do valor: %i \n", valor, valor*3);
//potencialização do valor
    quadrado = pow(valor, 2);
    cubo = pow(valor, 3);

    printf("-\n");
    printf("QUADRADO (%i ^ 2) do valor: %i \n", valor, quadrado);
    printf("CUBO (%i ^ 3) do valor: %i \n", valor, cubo);
//fim potencialização
}// multi

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    multi(valor);
}
