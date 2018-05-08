#ifndef listas_h_included
#define listas_h_included
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Lista{
	int num;
	char piloto[10], destino[15];
	struct Lista*ant;
	struct Lista*prox;
}lista;

lista*criarLista(int no, char piloto[], char destino[]);
lista*inserirLista(lista**li, int conteudo, char *piloto, char *destino);
void imprimir(lista*li);
lista*removerLista(lista**li, int conteudo);

#endif//listas_h_included
