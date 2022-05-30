#include <stdio.h>
#include <stdlib.h>

//3. Escrever um programa que cadastre v�rios produtos. Em seguida, imprima
//uma lista com o c�digo e nome da cada produto. Por �ltimo, consulte o pre�o
//de um produto atrav�s de seu c�digo.

typedef struct{
	char nome[100];
	int codigo;
	float preco;
}Produto;
#define QTDPROD 2
main(){
	Produto produtos[QTDPROD];
	int i, busca;
	printf("Cadastro Produtos..\n");
	for(i=0; i< QTDPROD; i++){
		printf("-----------------------\n");
		printf("Nome:");
		scanf("%s", &produtos[i].nome);
		printf("Codigo:");
		scanf("%i", &produtos[i].codigo);
		printf("Preco:");
		scanf("%f", &produtos[i].preco);
	}
	for(i=0; i< QTDPROD; i++){
		printf("-----------------------\n");
		printf("Nome: %s \n", produtos[i].nome);
		printf("Codigo: %i \n", produtos[i].codigo);
		printf("Preco: %1.2f \n", produtos[i].preco);
	}
	
	printf("Digite <Codigo> Produto pra Buscar: ");
	scanf("%i", &busca);
	for(i=0; i < QTDPROD; i++){
		if(busca == produtos[i].codigo){
			printf("-----------------------\n");
			printf("Produto Encontrado..\n");
			printf("Nome:");
			printf("%s \n", produtos[i].nome);
			printf("Preco:");
			printf("%1.2f \n", produtos[i].preco);
		}
	}
	return 0;
}
