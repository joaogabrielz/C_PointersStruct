#include <stdio.h>
#include <stdlib.h>

//4. Escreva um programa que simule contas bancárias, com as seguintes
//especificações:
//• Ao iniciar o programa vamos criar contas bancárias para três clientes.
//o Cada conta terá o nome e o CPF do cliente associado a ela.
//o No ato da criação da conta o cliente precisará fazer um depósito
//inicial.
//• Após as contas serem criadas, o sistema deverá possibilitar realizações
//de saques ou depósitos nas contas.
//o Sempre que uma operação de saque ou depósito seja realizada, o
//sistema deverá imprimir o nome do titular e o saldo final da conta.

typedef struct{
	char nome[256];
	long long cpf;
}Cliente;

typedef struct{
	long numero_conta;
	long cpf_cliente;
	double saldo;
}Conta;

#define QTDCLI 3
#define OPERACAO_SAQUE 1
#define OPERACAO_DEPOSITO 2

main(){
	Cliente clientes[QTDCLI];
	Conta contas[QTDCLI];
	long i;
	printf("-Cadastro conta-");
	for(i=0; i<QTDCLI; i++){
		printf("\n Dados para abertura de conta (%ld):\n", i+1);
		printf("Nome: \n");
		scanf("%s", &clientes[i].nome);
		printf("CPF: \n");
		scanf("%Ld", &clientes[i].cpf);
		printf("Deposito Inicial: \n");
		scanf("%lf", &contas[i].saldo);
		contas[i].numero_conta = i;
		contas[i].cpf_cliente = clientes[i].cpf;
		printf("\nCliente: %s | Conta: %ld | Saldo inicial: %1.2lf\n",
		clientes[i].nome, contas[i].numero_conta, contas[i].saldo);	
	}
	int opt; 
	long num_conta;
	double valor;
	int sair = 0; //false
	int x;
	int j;
	while(!sair){
		printf("Informe a Operacao: 1-Saque 2-Deposito 3-Sair \n");
		scanf("%d", &opt);

		if(opt == OPERACAO_SAQUE || opt == OPERACAO_DEPOSITO){
			printf("\n Informe o numero da conta: ");
			scanf("%d", &num_conta);
			printf("\n Informe o valor: ");
			scanf("%lf", &valor);
			for(x =0; x < QTDCLI; x++){
				if(contas[x].numero_conta == num_conta){
					if(opt == OPERACAO_SAQUE){
						contas[x].saldo -= valor;
						printf("\nSaque: %1.2lf", valor);
					}
					if(opt == OPERACAO_DEPOSITO){
						contas[x].saldo += valor;
						printf("\nSaque: %1.2lf", valor);
					}
					for(j=0; j < QTDCLI; j++){
						if(clientes[j].cpf == contas[j].cpf_cliente){
							printf("\nCliente: %s  Saldo Atual: %1.2lf",
							clientes[j].nome, contas[j].saldo);
						}
					}
				}else{
				//	sair = 1;//true
				}
			}
		}
	}
	getchar();
	return 0;
}
