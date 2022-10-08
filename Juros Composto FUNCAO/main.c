/*
Idem anterior por�m com juros compostos. Montante final equivale ao capital inicial * (1 + juros) ^ per�odo.
*/

#include <stdio.h>
#include <stdlib.h>

float juros_composto (float capital, float juros, float qtd_meses){
    float juros1;
    float calculo_montante, calculo_juros;
    int i = 0;

    juros1 = juros / 100;
//c�lculo de juros
    calculo_montante = capital * (pow((1 + juros1), qtd_meses));

    return calculo_montante;
}

int main()
{
    float capital, juros, qtd_meses;
    float juros_c;

    printf("Digite a quantia a ser depositada: R$");
    scanf("%f", &capital);
    printf("Digite o juros a ser aplicado: ");
    scanf("%f", &juros);
    printf("Digite o periodo a ser aplicado (quantidade de meses): ");
    scanf("%f", &qtd_meses);
//atribui��o da fun��o � vari�vel
    juros_c = juros_composto (capital, juros, qtd_meses);
    printf("\nMontante final: R$%.2f \n", juros_c);

}//main
