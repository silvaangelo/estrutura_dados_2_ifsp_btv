/*

Angelo Rodrigo Ribeiro da Silva
1670093
Turma A

*/

#include <stdio.h>
#include <stdlib.h>

void QuickSort(int array[10], int init, int end) {
   
   int pivo, aux, i, j ;
     
   pivo = array[init];
   i = init;
   j = end;
  
      
   do{
      while (array[i] < pivo)  
	      i = i + 1;
      while (array[j] > pivo) 
	      j = j - 1;
      
      if(i <= j){               
         aux = array[i];
         array[i] = array[j];
         array[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }
   
   while(j > i);
   
     if(init < j) 
         QuickSort(array, init, j);
       
     if(i < end) 
         QuickSort(array, i, end);
  
}

void merge(int V[10], int init, int meio, int end){		
    int p1, p2, size, i, j, k;
    int end1 = 0, end2 = 0;
    int temp[10] = {0,0,0,0,0,0,0,0,0,0};
    
    size = end-init+1;
    p1 = init;
    p2 = meio+1;  
     
   
    for(i=0; i<size; i++){
        if(!end1 && !end2){
            if(V[p1] < V[p2])
                temp[i]=V[p1++];
            else
                temp[i]=V[p2++];

            if(p1>meio) end1=1;
            if(p2>end) end2=1;
        }else{
            if(!end1)
               temp[i]=V[p1++];
            else
               temp[i]=V[p2++];
        }
    }
    for(j=0, k=init; j<size; j++, k++)
        V[k]=temp[j];

  
}

void mergeSort(int V[10], int init, int end){
	
    int meio;
    
    if(init < end){
               
        meio = ((init+end)/2);
        
        mergeSort(V,init,meio);
        mergeSort(V,meio+1,end);
        
        merge(V,init,meio,end);
    }
}

void showArray(int array[10]) {
	int i=0;

	printf("\n");

	for (i = 0; i <= 9; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");
}

bool menu(int array[10]) {
	int option = 0;

	while(true) {
		printf("MENU: \n\n");
		printf("1 - Merge\n");
		printf("2 - QuickSort\n");
		printf("3 - Sair\n");
		scanf("%d", &option);

		switch(option) {
			case 1:
				mergeSort(array, 0, 9);
				showArray(array);
			break;

			case 2:
				QuickSort(array, 0, 9);
				showArray(array);
			break;

			case 3:
				return false;
			break;
		}
	}
}

int main() {
	int array[10] = {3, 5, 2, 6, 8, 9, 1, 30, 29, 15};

	printf("ARRAY DESORDENADO: \n\n");

	showArray(array);

	menu(array);

	return 0;
}

/*

Angelo Rodrigo Ribeiro da Silva
1670093
Turma A

*/