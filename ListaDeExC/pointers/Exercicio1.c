#include <stdio.h>
#include <stdlib.h>

//1.Quais serão os valores de x, y e p ao final do trecho de código
//abaixo?
main(){
	int x, y, *p;  y=0;
	
	p = &y;
	x = *p;
	x = 4;
	(*p)++;
	--x;
	(*p) += x;
	
	printf("%d \n", x); //3
	printf("%d \n", y); //4
	printf("%d \n", p); //pos_memo y
	printf("%d \n", *p); //4
}
