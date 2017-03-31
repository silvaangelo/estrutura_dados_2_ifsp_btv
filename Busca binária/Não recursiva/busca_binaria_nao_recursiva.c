/*
	Autor: Angelo Rodrigo Ribeiro da Silva
	Turma: A
	Prontuario: 1670093
*/
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 49
int arrayToSearch[50], contador = 1;

// Preenche o array
int fillArray() {
	int pause = 0, i=0;

	for (i = 0; i <= ARRAY_SIZE; i++) {
		arrayToSearch[i] = i*2+3;
	}

	return 0;
}

// Realiza a busca pelo valor indicado
int binarySearch(int wantedValue) {
	int initialPosition = 0, endPosition = ARRAY_SIZE, center;

	while(initialPosition <= endPosition) {
		contador++;

		center = (initialPosition + endPosition) / 2;

		if (wantedValue == arrayToSearch[center]) {
			return center;
		} else if (wantedValue < arrayToSearch[center]) {
			endPosition = center - 1;
		} else {
			initialPosition = center + 1;
		}
	}

	return -1;
}

// Função que exibe a mensagem em caso de valor encontrado
void throwMessage(int wantedValue, int result) {
	if (result > -1) {
		printf("Valor %d foi encontrado na posicao %d do array \n", wantedValue, result);
		printf("Foi preciso rodar %d vezes para encontrar o valor %d \n\n", contador, wantedValue);
	} else {
		printf("Valor %d nao foi encontrado no array \n", wantedValue);
		printf("Foi preciso rodar %d vezes para tentar encontrar o valor %d \n\n", contador, wantedValue);
	}
}

int main (void) {	
	fillArray();

	int search = 0, result = 0;

	printf("\n\n Escolha um numero para ser procurado no array: ");
	scanf("%d", &search);

	result = binarySearch(search);

	throwMessage(search, result);

	return 0;
}
