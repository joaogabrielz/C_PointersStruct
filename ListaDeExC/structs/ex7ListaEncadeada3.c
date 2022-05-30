//Considere uma implementacao de uma lista encadeada para arazenar as notas dos alunos de umaturma
//o tipo Lista representa a estrutura do nó da lista conforme a declaracao abaixo
//typedef struct lista Lista;
//Pede-se:
//a)Define struct lista de tal forma que a informacao associada a cada nó da lista seja composta por
//Nome do aluno : cadeia de caracteres com ate 80 caracteres
//Nota do aluno: numero real
//
//b)Escreve uma funcao para inserir um novo elemento na lista. A ordem em que o elemento será inserido na lista 
//é irrelevante. Esta funcao deve ter como valor de retorno o ponteiro para a lista alterada e deve obedecer
//o seguinte protótipo: Lista* insere (Lista* 1, char* ome, float nota);
struct lista {
	 char nome[81];
	 float nota;
	 struct lista* prox
};
typedef struct lista Lista;

Lista* insere (Lista* lst, char* nome, float nota)
{
	Lista* novo=(Lista*) malloc(sizeof(Lista));
	strcpy(novo->nome,nome);
	novo->nota=nota;
	novo->prox=lst;
	return novo;
}

