/*
	Nome: Angelo Silva	
	Prontuário: 1670093
	Turma: A
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZECOLUMN 19
#define SIZELINE 12

int indexRegistered[20], matrix[13][20];

// Insere os dados na matriz
bool insert(int index, int age, int cpf[]) {
	// Variaveis contadoras e auxiliares
	int i = 0, j = 0, k = 0, m = 0;

	for (i = 0; i <= SIZECOLUMN; i++) {
		if(indexRegistered[i] == 0) {
			indexRegistered[i] = index;

			matrix[0][i] = index;

			matrix[1][i] = age;

			for (k = 2; k <= 12; k++){
				m = k-2;
				matrix[k][i] = cpf[m];
			}

			return true;
		}
	}

	printf("\nO sistema está cheio, todas as posicoes foram preenchidas\n");
}

// Pega os dados que serao inseridos na matriz
void getToInsert() {
	int i = 0, j = 0, index = 0, age = 0, cpf[11]; 

	printf("\nIndice do usuario: ");
	scanf("%d", &index);

	printf("\nIdade do usuario: ");
	scanf("%d", &age);

	printf("\nCPF do usuario: ");

	for (i = 0; i <= 10; i++) {
		printf("\nDigito %d: ", i);
		scanf("%d", &cpf[i]);
	}	

	insert(index, age, cpf);
}

// Realiza a consulta na matriz e exibe os dados 
bool consult(int index) {
	int i = 0, j = 0, k = 0;

	for(i = 0; i <= SIZECOLUMN; i++) {
		if(matrix[0][i] == index) {
			printf("\nIndice: %d \n", index);
			printf("Idade: %d \n", matrix[1][i]);

			printf("CPF: ");

			for (j = 2; j <= 12; j++) {
				k = j-1;
				if (k % 3 == 0 && k < 9) {
					printf("%d", matrix[j][i]);
					printf(".");
				} else if (k == 9) {
					printf("%d", matrix[j][i]);
					printf("/");
				} else {
					printf("%d", matrix[j][i]);
				}
			}

			printf("\n\n");

			return true;
		}
	}

	printf("\nNAO LOCALIZADOm\n");

	return false;			
}

// Organiza a matriz utilizando bubbleSort para a busca binária
void bubbleSort() {
	int i = 0, j = 0, aux = 0, change = 0, k = 0;

	for (i = 0; i <= SIZECOLUMN; i++) {
		change = 0;
		for (j = 0; j <= (SIZECOLUMN-1)-i; j++) {
			if (indexRegistered[j] > indexRegistered[j+1]) {
				aux = indexRegistered[j];
				indexRegistered[j] = indexRegistered[j+1];
				indexRegistered[j+1] = aux;
				change = 1;
			}
		}

		if (change == 0)	{
			break;
		}
	}
}

// Busca binaria pelo índice indicado no array de index's
bool binarySearch(int index) {
	int i = 0, j = 0, left = 0, right = SIZECOLUMN, count = 0, center = 0;

	while(left <= right) {
		count++;

		center = (left + right) / 2;

		if (index == indexRegistered[center]) {
			bubbleSort();
			consult(index);
			return true;
		} else if (index < indexRegistered[center]) {
			right = center - 1;
		} else {
			left = center + 1;
		}
	}

	printf("\nNAO LOCALIZADOv\n");
	return false;
}

// Pega os dados para serem consultados
void getToConsult() {
	int index = 0;

	printf("Informe o indice: \n");
	scanf("%d", &index);
	fflush(stdin);

	binarySearch(index);
}

// Menu para o sistema
int menu() {
	int x = true, menuOption = 0;

	while(x) {
		printf("\nEntre com sua opcao: \n");
		printf("1 - Inserir\n");
		printf("2 - Consultar\n");
		printf("3 - Sair: ");
		scanf("%d", &menuOption);

		printf("\n\n");

		if (menuOption == 1) {
			// Sempre que for inserido um novo valor, ele ordena novamente
			getToInsert();
			bubbleSort();
		} else if (menuOption == 2) {
			getToConsult();
		} else {
			break;
		}
	}

	return 0;
}

// Para melhor visualizacao separa o sistema em uma funcao
int system() {
	menu();

	return 0;
}

int main(void) {
	system();		
}
/*
	Nome: Angelo Silva	
	Prontuário: 1670093
	Turma: A
*/