#include <stdio.h>
#include <stdlib.h>

//2.Os programas (trechos de código) abaixo possuem erros. Qual(is)?
//Comodeveriam ser?

void main(){
	int x, *p;
	x = 100;
//	p = x; //ERRO Ponteiro recebe Posicao de Memoria!
	p = &x;
	printf("Valor de p: %d\n", *p);
}
