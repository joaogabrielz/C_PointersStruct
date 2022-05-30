#include <stdio.h>
#include <stdlib.h>

//1 1 ) E s c r e v a u m a f u n ç ã o q u e r e c e b e u m a s t r i n g d e c a
//r a c t e r e s e u m a l e t r a e devolve um vetor de inteiros contendo as
//posições (índices no vetor dastring) onde a letra foi encontrada) e um inteiro
//contendo o tamanho do vetorcriado (total de letras iguais encontradas). Utilize
//o retorno de um vetor pararetornar os índices e um ponteiro para guardar o
//tamanho do vetor.

int *acha_car(char *str, char c, int *pn){
	int i=0, n=0, *indices = 0;
	for(i=0; str[i] != '\0'; i++){
		if(str[i] == c){
			n++;
		}
	}
	indices = (int *) malloc(n * sizeof(int));
	for(i =0; str[i] != '\0'; i++){
		if(str[i] == c){
			indices[n] = i;
			n++;
		}
	}
	*pn = n;
	return indices;
} 

main (){
	int *indices =0, n=0, i;
	char *frase = "teste";
	indices = acha_car(frase,'e', &n);
	for(i= 0; i < n ;i++){
		printf("%d ", indices[i]);
	}
return 0;
}

