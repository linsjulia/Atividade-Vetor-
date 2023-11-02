 

	#include <stdio.h>
	#include <stdlib.h>
	
	int crescente(const void *a, const void *b) {
		return (*(int *)a - *(int *)b);
	}


	int main (){
		int valores[7];

		int i;
		
		printf("Digite na mesma linha com espaço 7 numeros de sua escolha:\n");
		for(i = 0; i<7; i++){
		scanf("%d", &valores[i]);
		}

								
 	qsort(valores, 7, sizeof(valores[0]), crescente);
		
	
		printf("Valores em ordem crescente:\n");
		for(i = 0; i<7; i++){
			printf("%d \n", valores[i]);
		}	
	
	return 0;
	
	}
