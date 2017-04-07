/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/
#include <stdio.h>
#include <stdlib.h>
#define MATRIXSIZE 2

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

int foundValuesAbove(int valueToSearch, int matrix[][3]) {
	int i = 0, j = 0, k = 0;

	for (i = 0; i <= MATRIXSIZE; i++) {
		for (j = 0; j <= MATRIXSIZE; j++) {
			if (matrix[i][j] > valueToSearch) {
				printf("Valor acima de %d encontrado na posicao linha %d coluna %d da matrix, valor: %d\n", valueToSearch, i, j, matrix[i][j]);

				k++;
			}			
		}
	}

	if (k <= 0) {
		printf("Nenhum valor acima de %d encontrado na matriz\n", valueToSearch);
	}
}

int main(void) {
	int matrix[3][3], i=0, j=0, array[9];

	fillMatrix(matrix);

	printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - -\n\n");

	foundValuesAbove(5, matrix);

	return 0;
}
/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/