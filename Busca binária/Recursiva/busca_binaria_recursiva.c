/*
	Autor: Angelo Rodrigo Ribeiro da Silva
	Turma: A
	Prontuario: 1670093
*/
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 199

int arrayToSearch[200], contador = 1;

// Preenche o array
int fillArray() {
	int pause = 0, i=0;

	for (i = 0; i <= ARRAY_SIZE; i++) {
		arrayToSearch[i] = i*2+3;

		printf("Valor %d do array eh: %d \n", i, arrayToSearch[i]);
	}

	return 0;
}

// Realiza a busca pelo valor indicado de forma recursiva
int binarySearch(int wantedValue, int initialPosition, int endPosition) {
	contador++;

	int center = (initialPosition + endPosition) / 2;

	if (arrayToSearch[center] == wantedValue) {
		return center;
	} else if (initialPosition >= endPosition) {
		return -1;
	} else {
		if (arrayToSearch[center] < wantedValue) {
			return binarySearch(wantedValue, initialPosition + 1, endPosition);
		} else {
			return binarySearch(wantedValue, initialPosition, endPosition - 1);
		}
	}

	return -1;
}

// Função que exibe a mensagem em caso de valor encontrado
void throwMessage(int wantedValue, int result) {
	if (result > -1) {
		printf("Valor %d foi encontrado na posicao %d do array \n", wantedValue, result);
		printf("Foi preciso rodar %d vezes para encontrar o valor desejado \n\n", contador);
	} else {
		printf("Valor %d nao foi encontrado no array \n", wantedValue);
		printf("Foi rodado %d vezes para tentar encontrar o valor desejado \n\n", contador);
	}
}

int main (void) {	
	fillArray();

	int search = 0, result = 0;

	printf("\n\nEscolha um numero para ser procurado no array: ");
	scanf("%d", &search);

	result = binarySearch(search, 0, ARRAY_SIZE);

	throwMessage(search, result);

	return 0;
}
