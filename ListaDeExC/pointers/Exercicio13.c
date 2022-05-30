#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

//13. Qual é a saída deste programa?
//#include <iostream.h>
//void main( ) {
//int i=5, *p;
//p = &i;
//cout << p << ‘\t’ << (*p+2) << ‘ \t’ << **&p << ‘\t’ << (3**p) << ‘ \t’ << (**&p+4);

void main(){
	int i=5, *p;
	p = &i;
 cout << p << '\t' << (*p+2) << ' \t' << **&p << '\t' << (3**p) << ' \t' << (**&p+4);
}
//Asaída :
//p=Oendereço para onde p aponta
//(*p+2) =Ovalor do conteúdo para onde p aponta + 2, que, no caso, dá 7
//**&p =Ovalor do conteúdo para onde p aponta. No caso, 5
//(3**p) =Ovalor do conteúdo para onde p aponta multiplicado por 3, ou seja, 15.
//(**&p+4) =Ovalor do conteúdo para onde p aponta somado a 4. No caso, dá 9.
