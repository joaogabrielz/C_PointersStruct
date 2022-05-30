#include <stdio.h>
#include <stdlib.h>

//Considerando uma lista encadadeada de valores inteiros definiados pelo tipo abaixo:
//struct lista{
//	int info;
//	struct lista* prox;
//};
//typedef struct lista Lista;
//Escreve uma funacaoque retire o ultimo elementopde uma dada lista. esta funcao deve ter como valor
//de retorno o ponteiro para a lista alterada e deve obedecer o seguinte prototipo.
//Lista* retira_ultimo (Lista* 1);

Lista* retira_ultimo (Lista* l){
	if(l == NULL) {
		return NULL;
	}
	else {
		Lista* ant = NULL;
		Lista* p = l;
		while(p->prox !=NULL) {
			ant = p;
			p = p->prox;
		}
		free(p);
		if (ant!=NULL) {
			ant -> prox = NULL;
			return l;
		}
		else{
			return NULL;
		} 
	}
}
