//8. Dada uma lista duplamente encadeada e todos os seus n�s tem campos de
//inteiros, para a guarda de informa��o, prox, ponteiro que aponta para o
//pr�ximo da lista, e ant, que � um ponteiro que aponta para o anterior da lista.
//Temos a inser��o de a, b, c, d, x, y e z. A lista fica da seguinte maneira:
//a-> b-> c-> x -> y -> z
//A lista tem um ponteiro pri que aponta para o seu primeiro elemento (a, no
//caso). Quais ser�o os n�s acessados nos seguintes casos?

//a) pri->prox->prox->ant->prox->prox
//b) pri->ant->ant->prox->ant->prox
//c) pri -> ant-> prox -> prox -> prox -> ant

//Resposta:
//a) O n� acessado sera o x.
//b) O n� acessado sera o z.
//c) O n� acessado sera o b.
