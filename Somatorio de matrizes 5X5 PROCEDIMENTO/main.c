#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void imprime (int m[MAX][MAX]){
	for (int i = 0 ; i < MAX ; i++){
		for (int j = 0 ; j < MAX ; j++)
			printf (" %d\t",m[i][j]);
		printf ("\n");
	}
}

void soma (int m[MAX][MAX], int n[MAX][MAX], int o[MAX][MAX]){
	for (int i = 0 ; i < MAX ; i++)
		for (int j = 0 ; j < MAX ; j++)
			o[i][j] = m[i][j] + n[i][j];
}


int main (){
    int i, j;

	int m[MAX][MAX]; /*= {
		{5, 2, 6, 1, 8},
		{3, 4, 7, 0, 9},
		{23, 11, 22, 33, 44},
		{99, 88, 77, 66, 55},
		{21, 12, 34, 43, 45 }
	},*/

	 int n[MAX][MAX]; /*= {
		    {2, 2, 1, 1, 3},
		    {3, 4, 5, 0, 4},
		    {21, 11, 22, 33, 44},
		    {99, 88, 77, 66, 55},
		    {21, 12, 3, 4, 2 }
	    },*/

	    for (i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                m[i][j] = rand() % 50;
            }
		}

	    for (i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                n[i][j] = rand() % 50;
            }
		}

	    int o[MAX][MAX];

	printf ("Matriz 1\n");
	imprime (m);
	printf ("\nMatriz 2 \n");
	imprime (n);
	soma (m,n,o);
	printf ("\nResultado soma: \n");
	imprime (o);


}// main

