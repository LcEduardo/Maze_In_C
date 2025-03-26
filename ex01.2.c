#include <stdio.h>

#define SIZE 5

int largestNumber(int array[]) {
	
	int lrg = 0, i = 0;
	int indice = 0;
	
	for(i = 0; i < SIZE; i++) {
		
		if(array[i] > 0) {
			if(array[i] > lrg) {
				lrg = array[i];
				indice = i;
			}	
		}
		
	}
	
	return indice;
	
}

void ordenacaoPorSelecao(int array[], int sortedArray[]) {
	
	int tempArray[SIZE];
	int i = 0, index = 0;
	
    for(i = 0; i < SIZE; i++) {
        tempArray[i] = array[i];  // Copia os valores para não modificar o original
    }
	
	for(i = 0; i < SIZE; i++){
		
		index = largestNumber(array);
		sortedArray[i] = array[index]; 
		
		array[index] = -1;
	}
	
}

int main() {
	
	int array[SIZE] = {2, 3, 1, 5, 6};
	int sortedArray[SIZE];
	int i = 0;
	
	ordenacaoPorSelecao(array, sortedArray);
	
	printf("Array ordenado: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", sortedArray[i]);
    }
    
    printf("\n");
    printf("Maior valor = %d\nMenor valor = %d", sortedArray[0], sortedArray[SIZE - 1]);
	
	return 0;
}
