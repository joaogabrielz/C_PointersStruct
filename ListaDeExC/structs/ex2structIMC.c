#include <stdio.h>
#include <stdlib.h>

//2.Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo
//de algumas pessoas. Com os dados cadastrados, em seguida localizar uma
//pessoas através do seu CPF e imprimir o seu IMC

typedef struct{
	char nome[100];
	float altura; //168 cm
	float peso;
	long long cpf;
	char sexo; //m ou f
}Pessoa;

#define QTD 1
main(){
	Pessoa pessoas[QTD]; int i; long long tempCpf; float imc;
	printf("Cadastro de Pessoas \n");
	for(i=0; i < QTD; i++){
		printf("Nome: \n");
		scanf("%s", &pessoas[i].nome);
		printf("Altura: \n");
		scanf("%f", &pessoas[i].altura);
		printf("Peso: \n");
		scanf("%f", &pessoas[i].peso);
		printf("Cpf: \n");
		scanf("%Lu", &pessoas[i].cpf);
		printf("sexo: M ou F \n");
		scanf("%c", &pessoas[i].sexo);
	}
	printf("Digite seu CPF: \n");
	scanf("%Lu",&tempCpf);
	for(i=0; i< QTD; i++){
		if(pessoas[i].cpf == tempCpf){
			printf("<Pessoa Encontrada>: %s\n",pessoas[i].nome);
		    imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
			printf("IMC: %f\n", imc);
			if(imc < 18.5)
	        	printf("IMC: Abaixo do peso\n");
		    else if(imc >= 18.5 && imc < 25)
		        printf("IMC: Peso normal\n");
		    else if(imc >= 25 && imc < 30)
		        printf("IMC: Sobrepeso\n");
		    else if(imc >= 30 && imc < 35)
		        printf("IMC: Obesidade grau 1\n");
		    else if(imc >= 35 && imc < 40)
		        printf("IMC: Obesidade grau 2\n");
		    else
		        printf("IMC: Obesidade grau 3\n");
		}
	}
	//	getchar();
	return 0;
}
