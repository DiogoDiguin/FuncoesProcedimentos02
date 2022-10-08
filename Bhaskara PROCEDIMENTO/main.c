/*
Escreva um procedimento que receba por valor as 3 constantes de uma equação de segundo grau e devolva por referência
o valor de delta e as duas raízes de báskara .
Informações:
Incluir <math.h> para habilitar a função sqrt() // raíz quadrada.
Delta = b^2 - 4*a*c
Báskara (-b +/-sqrt(delta))/2*a
Equação pra teste: x^2 - x - 12 = 0 ==> delta = 49, raíz1 = 4 e raíz2 = -3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bhaskara (float a, float b, float c, float *delta, float *x1, float *x2){
    /*float delta;
    float x1, x2;*/

    *delta = (pow(b,2)) - (4 * a * c);
    *x1 = (-b + (sqrt(*delta))) / 2 * a;
    *x2 = (-b - (sqrt(*delta))) / 2 * a;

    printf("\nValor de DELTA = %.2f \n", *delta);
    printf("X1 = %.2f \n", *x1);
    printf("X2 = %.2f \n", *x2);

    if(b < 0){
        printf("\nRepresentacao:\n");
        printf("Delta = (%.2f ^ 2) - (4 * %.2f * %.2f)\n", b, a, c);
        printf("X1 = (%.2f) + V%.2f) / (2 * %.2f)\n", b, *delta, a);
        printf("X1 = (%.2f) - V%.2f) / (2 * %.2f)\n", b, *delta, a);
    }else{
        printf("\nRepresentacao:\n");
        printf("Delta = (%.2f ^ 2) - (4 * %.2f * %.2f)\n", b, a, c);
        printf("X1 = (%.2f) + V%.2f) / (2 * %.2f)\n", b*(-1), *delta, a);
        printf("X1 = (%.2f) - V%.2f) / (2 * %.2f)\n", b*(-1), *delta, a);
    }

}// bhaskara


int main()
{
    float a, b, c;
    float delta, x1, x2;

    printf("Defina o valor de A: ");
    scanf("%f", &a);
    printf("Defina o valor de B: ");
    scanf("%f", &b);
    printf("Defina o valor de C: ");
    scanf("%f", &c);

    bhaskara(a, b, c, &delta, &x1, &x2);

}//main


/* Professor

#include <stdio.h>
#include <math.h>
void segundograu(float a, float b, float c, float *delta, float *r1, float *r2){

    *delta = b*b - 4 * a *c;
    *r1 = ((-1)*b  + sqrt(*delta))/(2*a);
    *r2 = ((-1)*b  - sqrt(*delta))/(2*a);
}


int main (){
float d, raiz1, raiz2;
segundograu(1.0,-1.0,-12.0 ,&d,&raiz1,&raiz2);
printf (" Delta = %.2f   r1 = %.2f   r2 = %.2f\n",d,raiz1,raiz2);
}

*/
