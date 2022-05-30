#include <stdio.h>
#include <stdlib.h>

//Os programas (trechos de código) abaixo possuem erros. Qual(is)? Comodeveriam ser?

void troca(int *i, int *j){
//	int *temp;  //Erro Temp nao Presisa ser ponteior, pois armazena so valor interiro
	int temp;
    temp = *i; 
	*i = *j;
	*j = temp;
}

void main(){
	int *pi;  
	int *pj;
	troca(pi, pj);
}
