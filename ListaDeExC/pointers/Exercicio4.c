#include <stdio.h>
#include <stdlib.h>

void mm(int *v, int n ,int *min, int *max){
	int i;
	*min = v[0];
	*max = v[0];
	
	for(i=0; i < n; i++){
		
		if(v[i] > *max){
			*max = v[i];
		}
		else if(v[i] < *min){
			*min = v[i];
		}
	}	
}

main(){
	int i, n, *vet, min, max;
	printf("Quantos numeros?: ");
	scanf("%d", &n);
	vet = malloc(n* sizeof(int));
	for(i = 0; i < n; i++){
		printf("Numero de Indice [%d]: ", i);
		scanf("%d", &vet[i]);	
	}
	
	mm(vet, n, &min, &max);
	printf("Minimo: %d e Maximo: %d \n", min, max);
	return 0;
}
