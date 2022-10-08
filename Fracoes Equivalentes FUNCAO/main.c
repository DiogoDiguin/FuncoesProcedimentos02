/*
Escreva uma fun��o que receba por valor duas fra��es por par�metro e que forne�a um retorno booleano
indicando se as duas fra�a�s s�o equivalentes ou n�o. Exemplo: Considere as fra��es a/b e c/d, ambas ser�o
equivalentes se (a*d)/(b*c) = 1.
*/

#include <stdio.h>
#include <stdlib.h>

float equiv (float v1, float v2, float v3, float v4){
    float calculo;

    calculo = ((v1*v4)/(v2*v3)); //c�lculo de equival�ncia
    return calculo;
}// equiv

int main()
{
    float v1, v2, v3, v4;

    printf("Digite o Valor 1: ");
    scanf("%f", &v1);
    printf("Digite o Valor 2: ");
    scanf("%f", &v2);
    printf("Digite o Valor 3: ");
    scanf("%f", &v3);
    printf("Digite o Valor 4: ");
    scanf("%f", &v4);

    equiv(v1, v2, v3, v4);

    printf("\n((%.2f * %.2f) / (%.2f * %.2f)) = %.2f", v1, v4, v2, v3, equiv(v1, v2, v3, v4));
//julgamento de equival�ncia
    if(equiv(v1, v2, v3, v4) == 1){
        printf("\n\nAs fracoes %.2f & %.2f SAO equivalentes. \n", v1, v3);
        printf("           %.2f   %.2f\n", v2, v4);
    }else{
        printf("\n\nAs fracoes %.2f & %.2f NAO SAO equivalentes. \n", v1, v3);
        printf("           %.2f   %.2f\n", v2, v4);
    }

}//main
