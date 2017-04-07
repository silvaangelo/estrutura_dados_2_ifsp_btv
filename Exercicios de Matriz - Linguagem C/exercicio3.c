/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/
#include <stdio.h>
#include <stdlib.h>
#define MATRIXSIZE 4

int fillMatrixWithZeroAndOnesInDiagonal(int matrix[][5]) {
	int i = 0, j = 0;

	for (i = 0; i <= MATRIXSIZE; i++) {
		for (j = 0; j <= MATRIXSIZE; j++) {
			if (i == j) {
				matrix[i][j] = 1;
			} else {
				matrix[i][j] = 0;
			}
		}
	}

	return 0;
}

void printMatrix(int matrix[][5]) {
	int i=0, j=0;

	printf("\n----- MATRIZ -----\n\n");

	for (i = 0; i <= MATRIXSIZE; i++) {
		for (j = 0; j <= MATRIXSIZE; j++) {
			printf("%d ", matrix[j][i]);
		}

		printf("\n");
	}

	printf("\n----- MATRIZ -----\n");
}

int main(void) {
	int matrix[5][5], i=0, j=0;

	fillMatrixWithZeroAndOnesInDiagonal(matrix);

	printMatrix(matrix);

	return 0;
}
/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/