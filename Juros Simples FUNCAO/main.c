/*
Escreva uma função que receba por valor os parâmetros Capital, juros e período (considere meses). Em regime de juros simples,
a função deve retornar o Montante gerado. Nos juros simples o Montante é equivalente ao produto entre capital, juros
e Período Somado ao capital inicial.
*/

#include <stdio.h>
#include <stdlib.h>

float juros_simples (float capital, float juros, float qtd_meses){
    float juros1;
    float calculo_montante, calculo_juros;
    int i = 0;

    juros1 = juros / 100;
//cálculo de juros
    calculo_montante = (capital * juros1 * qtd_meses) + capital;

    return calculo_montante;
}

int main()
{
    float capital, juros, qtd_meses;
    float juros_s;

    printf("Digite a quantia a ser depositada: R$");
    scanf("%f", &capital);
    printf("Digite o juros a ser aplicado: ");
    scanf("%f", &juros);
    printf("Digite o periodo a ser aplicado (quantidade de meses): ");
    scanf("%f", &qtd_meses);
//atribuição da função à variável
    juros_s = juros_simples (capital, juros, qtd_meses);
    printf("\nMontante final: R$%.2f \n", juros_s);

}//main
