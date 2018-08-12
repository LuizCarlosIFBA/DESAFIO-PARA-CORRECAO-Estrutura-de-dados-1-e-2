#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
   char info;
   struct nodo *prox;

} Nodo;

void inserir(Nodo **inicio,char letra)
{
    Nodo *atual, *novo, *anterior;
    novo = (Nodo *) malloc(sizeof(Nodo));
    atual = *inicio;
    anterior = NULL;

      
    novo->info = letra;
    
  
    //Já que temos apenas 1 valor A e 2 valores B
    //as únicas sequências possíveis são: ABB ou BBA.
    while(atual != NULL && atual->info < letra){
    	anterior = atual;
        atual = atual->prox;
    }
    //A lógica acima, por coincidência atendeu o caso, apesar dela servir
    //para unicamente ordenar em ordem alfabética. Obs: se usar esse código	
    //para fins didáticos procure uma solução melhor para essa ordenação  

    novo->prox = atual;
  	
    if(anterior == NULL){
    	*inicio = novo;
    } else{
         anterior->prox = novo;
    }
}


void mostraLista(Nodo *inicio){
    while(inicio != NULL){
        printf("%c ", inicio->info);
        inicio = inicio->prox;
    }
}


void main(){
    Nodo *inicio = NULL;
   
    inserir(&inicio,'B');
    inserir(&inicio,'A');
    inserir(&inicio,'B');
    
    mostraLista(inicio);
}
