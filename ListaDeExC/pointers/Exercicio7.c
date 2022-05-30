#include <stdio.h>
#include <stdlib.h>

//7)Escreva uma função chamada troca que troca os valores dos
//parâmetros recebidos. Sua assinatura deve ser:void troca(float *a, float *b);

void troca(float *a, float *b){
	int temp;
	temp = *a;
    *a = *b;
	*b = temp;
}

main (){
	float va = 2, vb = 20;
	printf("Valores Normais: \n");
	printf("%f \n",va);
	printf("%f \n",vb);
	
	troca(&va, &vb);
	printf("Valores Trocados: \n");
	printf("%f \n",va);
	printf("%f \n",vb);
}
