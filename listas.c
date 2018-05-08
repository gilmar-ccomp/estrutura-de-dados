#include "listas.h"

lista*criarLista(int no, char piloto[], char destino[]){
	lista*novo;
	novo=(lista*)malloc(sizeof(lista));
	if(!novo){
		printf("ERRO: Memoria Insuficiente!!\n");
		return 0;
	}
	
	novo->num=no;
	strcpy(novo->piloto,piloto);
	strcpy(novo->destino,destino);
	novo->ant = NULL;
	novo->prox = NULL;
	
	return novo;
}

lista*inserirLista(lista**li, int conteudo, char *piloto, char *destino){
		lista *p, *inicio = *li;
		p=criarLista(conteudo, piloto, destino);
		if(!(*li)){
			*li=p;
			inicio=*li;
		}else{
			inicio=*li;
			while((*li)->prox != NULL){
				(*li)=(*li)->prox;
			}
			(*li)->prox=p;
			p->ant=*li;			
		}	
		
		return inicio;
		
}

	void imprimir(lista*li){
		while(li!=NULL){
			printf("\n-------------------------------------");
			printf("\nAviao: %d", li->num);
			printf("\nPiloto: %s", li->piloto);
			printf("\nDestino: %s", li->destino);
			printf("\n-------------------------------------\n");
			li=li->prox;
		}
		system("pause");
		system("cls");
	}	
	
lista*removerLista(lista**li, int conteudo){
	lista*ant, *aux, *inicio;
	inicio = aux = ant =*li;
	//removendo no inicio
	if(aux->num == conteudo){
		aux = aux->prox;
		ant->prox = NULL; // retornor o conteudo
		free(ant);
		inicio = aux;
		printf("\nAvião removido do inicio: %d", conteudo);
	}else {
		//removendo no meio da lista
		while(aux->num != conteudo && aux->prox!=NULL){
			ant=aux;
			aux= aux->prox;
		}		
		if(aux->num==conteudo){
			if(aux->prox!=NULL){
				ant->prox = aux->prox;
				aux->prox = NULL;
				free(aux);
				printf("\nAvião removido do meio: %d", conteudo);
			}//Removendo no Final da Lista
		    else if(aux->prox==NULL){
			ant->prox==NULL;
			free(aux);
			printf("\nAvião removido do final: %d", conteudo);
		}
	}else
		printf("\nAvião não existente");
	}
			return inicio;
}

