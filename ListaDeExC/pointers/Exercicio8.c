#include <stdio.h>
#include <stdlib.h>

//8)Crie uma função que receba uma string como parâmetro (de
//tamanhodesconhecido) e retorne uma cópia da mesma. A assinatura da
//função deveser:char *strcopy(char *str);

char *strcopy(char *str){
int n, i;
	char *nova;
	for(n=0; str[n] != '\0'; n++){		
	nova = malloc(n * sizeof(char));
		for(i =0; i <= n; i++){
			nova[i] = str[i];
		}
	}
	return nova;
}

main (){
	char x[10] = "Tudo ok";
	printf(strcopy(&x));
}
