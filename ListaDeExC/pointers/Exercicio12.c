#include <stdio.h>
#include <stdlib.h>

//12. O que significa o operador asterisco em cada um dos seguintes casos:
//a) int *p;
//b) cout << *p;
//c) *p = x*5;
//d) cout << *(p+1);

main(){
	int *p; //Descalracao ponteiro p
	cout << *p; //Mostrar o valor conteudo apontada por p , q ainda nao tem , cout(c Output)
	*p = x*5; //Valor conteudo apontado recebe x*5 - x vezes 5
	cout << *(p+1); //c output, mostra valor conteudo da variavel apontada por p +1;
}
