#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	char info;
	struct nodo *prox;
}Nodo; 

//Insere no início
void insereH(Nodo **topo,char ele){
	Nodo *novo;
	novo = malloc(sizeof(Nodo));
	
	novo->info = ele;
	if(*topo==NULL){
		//insere no topo e faz o próximo virar nulo
		novo->prox = NULL;
		*topo = novo; 
	}else{	//fez o topo apontar pra celula 
		novo->prox = *topo;
		*topo = novo; 
	}
}

void mostrar(Nodo *inicio){
    while(inicio != NULL){
        printf("%c ", inicio->info);
        inicio = inicio->prox;
    }
}


//Excluir elementos
void excluir_elemento(Nodo *topo){
	//implemente
}


void main(){
	//aponta para o topo	
	Nodo *topo = NULL;
	insereH(&topo,'A');
	insereH(&topo,'B');	
	insereH(&topo,'B');
	insereH(&topo,'B');
	mostrar(topo);
	
}
