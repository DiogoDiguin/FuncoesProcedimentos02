#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void diagonal_p(int m[MAX][MAX]){
	for (int i = 0; i < MAX; i++)
		printf (" %d ", m[i][i]);
	printf ("\n");
}

void diagonal_s(int m[MAX][MAX]){
	for (int i = 0, j=MAX -1; i < MAX; i++,j--)
		printf (" %d ", m[i][j]);
	printf ("\n");
}

int conta_par(int m[MAX][MAX]){
	int conta = 0;
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			if (m[i][j] % 2 == 0)
				conta++;
	return conta;
}

int conta_impar(int m[MAX][MAX]){
	return MAX * MAX - conta_par(m);
}

void media_linhas(float *l1, float *l2, float *l3,
		float *l4, float *l5, int m[MAX][MAX]){
	*l1 =  ((float)(m[0][0] + m[0][1] + m[0][2] + m[0][3] + m[0][4]) / MAX) ;
	*l2 =  ((float)(m[1][0] + m[1][1] + m[1][2] + m[1][3] + m[1][4]) / MAX) ;
	*l3 =  ((float)(m[2][0] + m[2][1] + m[2][2] + m[2][3] + m[2][4]) / MAX) ;
	*l4 =  ((float)(m[3][0] + m[3][1] + m[3][2] + m[3][3] + m[3][4]) / MAX) ;
	*l5 =  ((float)(m[4][0] + m[4][1] + m[4][2] + m[4][3] + m[4][4]) / MAX) ;
}

float media (int m[MAX][MAX]){
	float somador=0.0;
	for (int i = 0 ; i < MAX ; i++)
		for (int j =0 ; j < MAX ; j++)
			somador += m[i][j];
	return somador/(MAX * MAX);

}

int  somatorio (int m[MAX][MAX]){
	float somador=0.0;
	for (int i = 0 ; i < MAX ; i++)
		for (int j =0 ; j < MAX ; j++)
			somador += m[i][j];
	return somador;

}




int maior_el(int m[MAX][MAX]){
	int maior = m[0][0];
	for (int i = 0 ; i < MAX ; i++)
		for (int j = 0 ; j < MAX ; j++)
			if (maior < m[i][j])
				maior = m[i][j];
	return maior;
}

int menor_el(int m[MAX][MAX]){
	int menor = m[0][0];
	for (int i = 0 ; i < MAX ; i++)
		for (int j = 0 ; j < MAX ; j++)
			if (menor >  m[i][j])
				menor = m[i][j];
	return menor;
}

int negativos (int m[MAX][MAX]){
	int encontrou = 0;
	for (int i = 0 ; i < MAX ; i++)
		for (int j = 0 ; j < MAX ; j++)
			if (m[i][j] < 0)
				encontrou = 1;
	return encontrou;
}



int main (){
	float m1, m2, m3, m4, m5; //medias de cada linha do item E
	int l, c, num;
	int m[MAX][MAX]; /*= {
		{5, 2, 6, 1, 8},
		{3, 4, 7, 0, 9},
		{23, 11, 22, 33, 44},
		{99, 88, -77, 66, 55},
		{21, 12, 34, 43, 45 }
	};*/ // valores estipulados MANUALMENTE

        for(l = 0; l < 5; l ++){
            for(c = 0; c < 5; c++){
                m[l][c] = (rand () % 50);
            }
        } // valores estipulados RANDOMICAMENTE

	diagonal_p(m); // a
	diagonal_s(m); // b
	printf ("Total de pares = %d\n", conta_par(m)); // c
	printf ("Total de impares = %d\n", conta_impar(m)); // d
	media_linhas(&m1, &m2, &m3, &m4, &m5, m); // e
	printf ("Media de cada linha %.2f %.2f %.2f %.2f %.2f\n",
			m1, m2, m3, m4, m5);
	printf ("Media da matriz = %.2f\n", media (m)); // f
	printf ("Maior elemento = %d\n", maior_el(m)); // g
	printf ("Menor elemento = %d\n", menor_el(m)); // h
	printf ("Somatorio dos elementos = %d\n",somatorio(m)); // i
	if (!negativos(m)) // j
		printf ("Nao ha elementos negativos na matriz\n");
	else
		printf ("Existem elementos negativos na matriz\n");

}// main
