/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/
#include <stdio.h>
#include <stdlib.h>
#define MATRIXSIZE 2
#define ARRAYSIZE 8

int fillMatrix(int matrix[][3]) {
	int k = 1, i = 0, j = 0;

	for (i = 0; i <= MATRIXSIZE; i++) {
		for (j = 0; j <= MATRIXSIZE; j++) {
			matrix[i][j] = k;
			k++;

			printf("Valor da linha %d da coluna %d da matrix: %d\n", i, j, matrix[i][j]);		
		}
	}

	return 0;
}

int multiplyMatrix(int matrix[][3], int array[]) {
	int i = 0, j = 0, k = 0;

	for (i = 0; i <= MATRIXSIZE; i++) {
		for (j = 0; j <= MATRIXSIZE; j++) {
			array[k] = matrix[i][j] * 3;

			printf("Posicao %d do array de valores multiplicados: %d \n", k, array[k]);
			k++;
		}
	}
}

int main(void) {
	int matrix[3][3], i=0, j=0, array[9];

	fillMatrix(matrix);

	printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - -\n\n");

	multiplyMatrix(matrix, array);

	return 0;
}
/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/