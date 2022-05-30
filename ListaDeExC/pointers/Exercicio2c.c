#include <stdio.h>
#include <stdlib.h>

//2.Os programas (trechos de código) abaixo possuem erros. Qual(is)? Comodeveriam ser?

main(){
	char *pa, *pb;
	
//	a = "abacate"; //Erro Ponteiros nao esta apontando, nempossui memoria Alocada!
//	b = "uva";  
	char a[] = "abacate";
	char b[] = "uva";
	pa = &a;
	pb = &b;

	if(a < b)
		printf("%s vem antes de %s no dicionario ", a , b);
	else
		printf("%s vem depois de %s no dicionario", a , b); 
		
//Codigo so funciona verificando 1 letra de char é menor, com manga e mamao nao funciona
}
