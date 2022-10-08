#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 5

struct calculo{
    char operacao;
    float resultado;
};

//Variáveis GLOBAIS
int i = 0;
struct calculo calculadora[MAX];
float n1, n2, nR;
//

void soma(){
    float soma = 0;
    int escolha;

    printf("\tRegistro N %i\n", i + 1);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    soma = n1 + n2;

    calculadora[i].operacao = '+';
    calculadora[i].resultado = soma;

    i ++;
    printf("> RESULTADO SALVO <\n");

    outra_op(calculadora);
}//soma

void subtracao(){
    float sub = 0;
    int opcao;

    printf("\tRegistro N %i\n", i + 1);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    //Escolha de cálculo
    printf("\n1 > %.2f - %.2f\n", n1, n2);
    printf("2 > %.2f - %.2f\n", n2, n1);
    printf("Calculo: ");
    scanf("%i", &opcao);

    if(opcao == 1){
        sub = n1 - n2;
            calculadora[i].operacao = '-';
            calculadora[i].resultado = sub;
        printf("> RESULTADO SALVO <\n");
         i ++;
    }else if(opcao == 2){
        sub = n2 - n1;
            calculadora[i].operacao = '-';
            calculadora[i].resultado = sub;
        printf("> RESULTADO SALVO <\n");
         i ++;
    }else{
        printf("Opcao invalida.");
    }

    outra_op(calculadora);
}//subtracao

void multiplicacao(){
    float mult = 0;
    int escolha;

    printf("\tRegistro N %i\n", i + 1);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    mult = n1 * n2;

    calculadora[i].operacao = '*';
    calculadora[i].resultado = mult;

    i ++;
    printf("> RESULTADO SALVO <\n");

    outra_op(calculadora);
}//multiplicacao

void divisao(){
    float div = 0;
    int opcao;

    printf("\tRegistro N %i\n", i + 1);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    //Escolha de cálculo
    printf("\n1 > %.2f / %.2f\n", n1, n2);
    printf("2 > %.2f / %.2f\n", n2, n1);
    printf("Calculo: ");
    scanf("%i", &opcao);

    if(opcao == 1){
        div = n1 / n2;
            calculadora[i].operacao = '/';
            calculadora[i].resultado = div;
        printf("> RESULTADO SALVO <\n");
         i ++;
    }else if(opcao == 2){
        div = n2 / n1;
            calculadora[i].operacao = '/';
            calculadora[i].resultado = div;
        printf("> RESULTADO SALVO <\n");
         i ++;
    }else{
        printf("Opcao invalida.");
    }

    outra_op(calculadora);
}//divisao

void potencia(){
    float pot = 0;
    int opcao;

    printf("\tRegistro N %i\n", i + 1);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    //Escolha de cálculo
    printf("\n1 > %.2f ^ %.2f\n", n1, n2);
    printf("2 > %.2f ^ %.2f\n", n2, n1);
    printf("Calculo: ");
    scanf("%i", &opcao);

    if(opcao == 1){
        pot = pow(n1, n2);
            calculadora[i].operacao = '^';
            calculadora[i].resultado = pot;
        printf("> RESULTADO SALVO <\n");
         i ++;
    }else if(opcao == 2){
        pot = pow(n2, n1);
            calculadora[i].operacao = '^';
            calculadora[i].resultado = pot;
        printf("> RESULTADO SALVO <\n");
         i ++;
    }else{
        printf("Opcao invalida.");
    }

    outra_op(calculadora);
}//potencia

void raiz(){
    float raiz = 0;

    printf("\tRegistro N %i\n", i + 1);
    printf("Digite o valor: ");
    scanf("%f", &nR);

    raiz = sqrt(nR);

    calculadora[i].operacao = 'V';
    calculadora[i].resultado = raiz;

    i ++;
    printf("> RESULTADO SALVO <\n");

    outra_op(calculadora);
}//raiz

void historico(){//historico
    int j = 0;
    int escolha;

    printf("\n\tHistorico\n");

    while(j < i){
        printf("\n\tOperacao N %i\n", j+1);
        printf("Operacao: %c | Resultado: %.2f\n", calculadora[j].operacao, calculadora[j].resultado);

        j++;
    }

    if (i < MAX){
        outra_op(calculadora);
    }
}//historico

void outra_op(){
    int escolha;

    printf("\nDeseja fazer outra operacao?\n");
    printf("1 > SIM\n");
    printf("2 > NAO\n");
    printf("Escolha: ");
    scanf("%i", &escolha);
        if(escolha == 1){
            menu(calculadora);
        }else{
            sair(calculadora);
        }
}//outra_op

void sair(){
    printf("\n\tObrigado.\n");
    exit("0");
}//sair

void menu(){
    int opcao;

    if(i < MAX){
    system("cls");

    printf("CALCULADORA - MENU\n");
    printf("            0 > Sair\n");
    printf("1 > Soma\n");
    printf("2 > Subtracao\n");
    printf("3 > Multiplicacao\n");
    printf("4 > Divisao\n");
    printf("5 > Potencializao\n");
    printf("6 > Raiz\n");
    printf("7 > Historico\n");
    printf("\tEscolha: ");
    scanf("%i", &opcao);
    printf("\n");

    }else{
        printf("\nLIMITE de registros ATINGIDO.\n");
        printf("Registros realizados:\n");
        historico(calculadora);
    }

    if(opcao < 0 || opcao > 7){
        printf("Opcao invalida\n");
        printf("Aguarde");
        sleep(1); printf(".");
        sleep(1); printf(".");
        sleep(1); printf(".");
        menu(calculadora);
    }
    if(opcao == 0){(sair(calculadora));}
    if(opcao == 1){(soma(calculadora));}
    if(opcao == 2){(subtracao(calculadora));}
    if(opcao == 3){(multiplicacao(calculadora));}
    if(opcao == 4){(divisao(calculadora));}
    if(opcao == 5){(potencia(calculadora));}
    if(opcao == 6){(raiz(calculadora));}
    if(opcao == 7){(historico(calculadora));}

}//menu

int main()
{
    menu(calculadora);
}//main
