#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	lista *ini, *decolar;
	ini=NULL;
	int num;
	char piloto[10];
	char destino[]= " - ";
	int op=0;

	do{
	printf("VIP Linhas Aereas!!!\n\n");
	printf("\n-------------------------------------");
	printf("\n[0] Fechar Programa");
	printf("\n[1] Cadastrar Aviao e Piloto");
	printf("\n[2] Mostrar Aviao Estacionados");
	printf("\n[3] Liberar para Pista de Decolagem");
	printf("\n-------------------------------------\nDigite Aqui >  ");
	scanf("%d", &op);
	system("cls");
		
		switch(op){
			case 0:
				printf("Fechando programa...\n");
				exit (1);
			case 1:
				printf("VIP Linhas Aereas!!!\n\n");
				printf("Qual o numero do aviao:  \n");
				scanf("%d", &num);
				system("cls");
				printf("VIP Linhas Aereas!!!\n\n");
				printf("Qual o nome do piloto:  \n");
				fflush(stdin);
				gets(piloto);
				system("cls");
				ini = inserirLista(&ini, num, piloto, destino);
				printf("VIP Linhas Aereas!!!\n\n");
				printf("Cadastro feito com sucesso!\n");
				system("pause");
				system("cls");
				break;
			case 2:
				imprimir(ini);
				break;
			case 3:
				printf("Add um aviao na fila\n");
				scanf("%d", &num);
				decolar = removerLista(&ini, num);
				
				break;
			default:
				printf("Opcao invalida\n");
		}
	}while(op!=0);
		
	return 0;
}
