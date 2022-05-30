#include <stdio.h>
#include <stdlib.h>

//Considerando uma lista encadadeadas que armazenam valores inteiros O tipo que representa
//um nó da lista é dado por:
//struct lista{
//	int info;
//	struct lista* prox;
//};
//typedef struct lista Lista;
//Implemente uma funcao que receba um vetor de valores inteiros com n elementos e construa
//umalista encadeada armazenando os elementos do vetor nos nós da lista.
//Assim se for recebido vetor v[5] = {3, 8, 1, 7, 2}, a funcao deve retornar 
//uma nova lista cujo primeiro nó tem a infromacao 3. o  segundo a informacao 8 e assim por diante
//Se o vetor tiver zero elementos a funcao deve ter como valor de retorno uma lista vazia
//O prototipo da funcao e dado por: Lista* constroi (int n, int* v);

Lista* constroi(int n, int* v)
{
 int i;
 Lista* head=NULL;
 for (i=0;i<n;i++) {
	 Lista* novo=(Lista*) malloc(sizeof(Lista));
	 novo->info=v[i];
	 novo->prox=head;
	 head=novo;
 }
 return head;
}
