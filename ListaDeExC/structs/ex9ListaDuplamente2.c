//9. Dada uma lista duplamente encadeada com o seguinte formato:
//55 -> 17 -> 5 -> 12 -> 0 -> 40 -> 8 -> 3
//Considerando que pri aponta para o primeiro elemento, qual será o valor de x?

//a) x = pri * pri -> prox -> prox -> ant – pri-> ant
//b) x = pri -> ant * pri -> prox – pri-> ant -> ant -> ant
//c) x = (pri -> ant -> ant -> ant / pri -> ant -> ant == pri -> prox ->prox)

//Resposta:
//a) O valor de x será (55 * 17) – 3 = 932.
//b) O valor de x será (3*17 – 40) = 11.
//c) O valor de x será (40 / 8 == 5) = TRUE
