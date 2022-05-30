#include <stdio.h>
#include <stdlib.h>

//Qual o resultado do código abaixo ?
//Explique cada linha
//int x = 100, *p, **pp;
//p = &x;
//pp = &p;
//printf(“Valor de pp: %d\n”, **pp);

main (){
	
int x = 100; //declaracao variavel comum
int *p; //declaracao de ponteiro q aponta pra inteiro;
int **pp; //Declaracao de ponteiro para ponteiro que aponta pra inteiro

p = &x; //Ponteiro p recebe Posicao de Memoria Var x, p Aponta pra x

pp = &p; //Recebe posicao de Memoria do Ponteiro p

printf("Valor de pp: %d\n", **pp);//ImprimeValor de **pp que é o valor da variavel que e apontada pelo ponteiro p

}

