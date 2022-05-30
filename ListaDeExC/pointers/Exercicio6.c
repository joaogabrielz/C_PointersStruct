#include <stdio.h>
#include <stdlib.h>

//6)(sem usar o computador) Qual o conteúdo do vetor a depois dos
//seguintescomandos.int a[99];for (i = 0; i < 99; ++i) a[i] = 98 -
//i;for (i = 0; i < 99; ++i) a[i] = a[a[i]];

main (){
	int i, a[99];
	for (i = 0; i < 99; ++i) {
		a[i] = 98 -i;
		printf("%d \n", a[i]);
	}
	for (i = 0; i < 99; ++i) {
		a[i] = a[a[i]];
		printf("%d \n", a[i]);
	}
}
//Primeiro for vai descendente 98 a 0
// e o segundo p cada elemento [i] troca o valor do elemento 0..ate 49(99/2)
//e depois 49..ate 0 Pois o for sobrescreve ele mesmo
