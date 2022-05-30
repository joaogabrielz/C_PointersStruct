#include <stdio.h>
#include <stdlib.h>

//3)Suponha que os elementos do vetor v s�o do tipo int e cada int
//ocupa 8 bytes no seu computador. Se o endere�o de v[0] � 55000, qual o
//valor daexpress�o v + 3?

main(){
	int v[3];
	printf("%p\n", &v[0]);
	printf("%p\n", &v[1]);
	printf("%p\n", &v[2]);
	printf("%p\n", &v[3]);
	
//	Se v (ou o endere�o de v[0]), que representa o primeiro item do vetor est�
//nobyte de endere�o 55000, 
//logo o �ndice v[3] (ou v + 3) estar� no byte 55000 + 8*3 = 55024.
//em m�quinas de 32 bits, inteiros ocupam 32 bits (4bytes)
}
