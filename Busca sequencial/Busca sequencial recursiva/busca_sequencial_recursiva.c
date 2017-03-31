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

// Realiza a busca sequencial pelo valor indicado de forma recursiva
int sequentialSearch(int wantedValue, int count) {
	contador++;

	if (wantedValue == arrayToSearch[count]) {
		return count;
	} else {
		sequentialSearch(wantedValue, count + 1);
	}
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

	result = sequentialSearch(search, 0);

	throwMessage(search, result);

	return 0;
}
