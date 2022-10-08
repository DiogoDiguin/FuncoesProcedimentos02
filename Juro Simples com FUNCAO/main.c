#include <stdio.h>
#include <stdlib.h>

float montante = 0, capital = 0, periodo = 0, juros = 0;

void juros_simples(){
    float calculo1, calculo2;
    int resposta, i = 1;

    juros = juros / 100;
    calculo1 = capital * periodo * juros;
    printf("\nMontante total: R$%.2f\n", capital + calculo1);
    printf("Valor de juros por ano: R$%.2f\n", calculo1);
    printf("Valor de juros por mes: R$%.2f\n", calculo1/ (12 * periodo));

    printf("\nExibir relacao de acrescimo pelo tempo?\n");
    printf("1 > SIM | 2 > NAO: ");
    scanf("%i", &resposta);

        if(resposta == 1){
            calculo2 = calculo1 / periodo;
            printf("\n");
            while(i <= periodo){
                printf("Ano %i: R$%.2f\n", i, capital + (calculo2 * i));
                i++;
            }
        }else{
            printf("\n\tObrigado.\n");
            exit("0");
        }
}//juros_simples

void juros_adequado(){
    float calculo;

    calculo = montante / (capital * periodo) ;
    printf("Juros adequado: %.2f\n", calculo);
}//juros_adequado

void periodo_adequado(){
    float calculo;

    juros = juros / 100;
    calculo = montante / (capital * juros);
    printf("Periodo adequado: %.0f\n", calculo);
}// periodo adequado

void capital_adequado(){
    float calculo;

    juros = juros / 100;
    calculo = montante / (periodo * juros);
    printf("Capital adequado: R$%.2f\n", calculo);
}// capital adequado

int main()
{
    int opcao = 0, continuar;
    int montante_disp, capital_disp, periodo_disp, juros_disp;
    int cont_termos = 0;

    while (cont_termos < 3){
        printf("\nO que possui para informar?\n");
        printf("1 > MONTANTE\n");
        printf("2 > CAPITAL INICIAL\n");
        printf("3 > PERIODO (em anos)\n");
        printf("4 > JUROS\n");
        printf("Escolha: ");
        scanf("%i", &opcao);

        switch(opcao){

        case 1:
            if (cont_termos < 3){
                printf("\nMontante: ");
                scanf("%f", &montante);
                cont_termos++;
                montante_disp = 1;
            }
        break;

        case 2:
            if (cont_termos < 3){
                printf("\nCapital Inicial: ");
                scanf("%f", &capital);
                cont_termos++;
                capital_disp = 1;
            }
        break;

        case 3:
            if (cont_termos < 3){
                printf("\nPeriodo: ");
                scanf("%f", &periodo);
                cont_termos++;
                periodo_disp = 1;
            }
        break;

        case 4:
            if (cont_termos < 3){
                printf("\nJuros: ");
                scanf("%f", &juros);
                cont_termos++;
                juros_disp = 1;
            }
        break;

        printf("Informar outro dado? 1 > SIM | 0 > NAO: ");
        scanf("%i", &continuar);

        }//switch(opcao)
    }//while

    if (capital_disp == 1 && periodo_disp == 1 && juros_disp == 1){
        juros_simples(capital, periodo, juros);
    }else if (montante_disp == 1 && capital_disp == 1 && periodo_disp == 1){
        juros_adequado(montante, capital, periodo);
    }else if (montante_disp == 1 && capital_disp == 1 && juros_disp == 1){
        periodo_adequado(montante, capital, juros);
    }else if (montante_disp == 1 && periodo_disp == 1 && juros_disp == 1){
        capital_adequado(montante, periodo, juros);
    }else{
        printf("\n\tNao foi possivel realizar o calculo, tente novamente.\n");
    }

}//main
