//8. Dada uma lista duplamente encadeada e todos os seus nós tem campos de
//inteiros, para a guarda de informação, prox, ponteiro que aponta para o
//próximo da lista, e ant, que é um ponteiro que aponta para o anterior da lista.
//Temos a inserção de a, b, c, d, x, y e z. A lista fica da seguinte maneira:
//a-> b-> c-> x -> y -> z
//A lista tem um ponteiro pri que aponta para o seu primeiro elemento (a, no
//caso). Quais serão os nós acessados nos seguintes casos?

//a) pri->prox->prox->ant->prox->prox
//b) pri->ant->ant->prox->ant->prox
//c) pri -> ant-> prox -> prox -> prox -> ant

//Resposta:
//a) O nó acessado sera o x.
//b) O nó acessado sera o z.
//c) O nó acessado sera o b.
