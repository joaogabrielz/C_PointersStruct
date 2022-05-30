#include <stdio.h>
#include <stdlib.h>

//5)Suponha que v é um vetor. 
//Descreva a diferença conceitual entre
// as expressões v[3] e v + 3.

main(){
	int v[3];
	v[0] = 2;
	v[1] = 3;
	v[3] = 4;
	printf("%d \n", v); //Endereco 1 elemento do vet
	printf("%d \n", v+3); //Endereco 4 elemento do vet
	printf("%d \n", v[3]); //Retorna 4 elemento do vet
	
	//v+3 retorna endereco
	//v[3] retorna elemento da posicao
	
}

