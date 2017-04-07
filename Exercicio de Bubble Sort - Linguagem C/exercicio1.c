/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/
#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 19

int fillArray(int array[]) {
	int i = 0, j = 0;

	for (int i = 0; i <= ARRAYSIZE; i++) {
		array[i] = rand() % 50;

		printf("%d\n", array[i]);
	}

	return 0;
}

void bubbleSort(int array[]) {
	int i = 0, j = 0, aux = 0, change = 0, k = 0;

	for (i = 0; i < ARRAYSIZE; i++) {
		change = 0;
		for (j = 0; j < (ARRAYSIZE-1)-i; j++)	{
			if (array[j] > array[j+1]) {
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
				change = 1;
			}

			printf("Array: ");

			for (k = 0; k <= ARRAYSIZE; k++) {
				printf("%d ", array[k]);
			}

			printf("\n");
		}

		if (change == 0)	{
			break;
		}
	}
}

int main(void) {
	int array[20], i=0, j=0;

	fillArray(array);

	bubbleSort(array);

	return 0;
}
/*
	Aluno: Angelo Rodrigo Ribeiro da Silva
	Prontuário: 1670093
	Turma: A
*/