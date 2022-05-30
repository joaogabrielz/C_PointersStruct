#include <stdio.h>
#include <stdlib.h>

//9)Escreva uma função que recebe como parâmetros um vetor de
//inteiros v, onúmero de elementos dele N e ponteiros para variáveis nas quais
//devem ser armazenados os valores maximo e minimo do vetor. Sua
//assinatura deve ser:void maximoMinimo(int *v, int N, int *maximo, int *minimo);

void maximoMinimo(int *v, int N, int *max, int *min){
	int i;
	*max = v[0];
	*min = v[0];
	for(i =0; i < N; i++){
		if(v[i] > *max){
			*max = v[i];
		}
		else if(v[i] < *min){
			*min = v[i];
		}
	}
}

main (){
	int i, n, *v;
	int max, min;
	printf("Quantas posicoes: ");
	scanf("%d", &n);
	v = malloc(n * sizeof(int));
		for(i=0; i<n; i++){
			printf("Preencha Numero Pos [%d]: ", i);
			scanf("%d", &v[i]);
		}
	
	maximoMinimo(v , n, &max, &min);
	printf("Minimo: %d \n", min);
	printf("Maximo: %d \n", max);
	return 0;
}

