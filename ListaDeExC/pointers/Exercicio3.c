#include <stdio.h>
#include <stdlib.h>

//3)Suponha que os elementos do vetor v são do tipo int e cada int
//ocupa 8 bytes no seu computador. Se o endereço de v[0] é 55000, qual o
//valor daexpressão v + 3?

main(){
	int v[3];
	printf("%p\n", &v[0]);
	printf("%p\n", &v[1]);
	printf("%p\n", &v[2]);
	printf("%p\n", &v[3]);
	
//	Se v (ou o endereço de v[0]), que representa o primeiro item do vetor está
//nobyte de endereço 55000, 
//logo o índice v[3] (ou v + 3) estará no byte 55000 + 8*3 = 55024.
//em máquinas de 32 bits, inteiros ocupam 32 bits (4bytes)
}
