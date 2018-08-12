#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
   char info;
   struct nodo *prox;

} Nodo;

void inserir(Nodo **inicio,int n)
{
    Nodo *atual, *novo, *anterior;
    novo = (Nodo *) malloc(sizeof(Nodo));
    atual = *inicio;
    anterior = NULL;

      
    novo->info = n;
    
    while(atual != NULL && atual->info > n){
    	anterior = atual;
        atual = atual->prox;
    }
    
    novo->prox = atual;
  	
    if(anterior == NULL){
    	*inicio = novo;
    } else{
         anterior->prox = novo;
    }
}


//a lógica só funciona se for colocado o valor 2 para N
void mostraLista(Nodo *inicio,int n){
    	
    int i = inicio->info;
    int ultimo = i+1;
    i--;
    int fimLinha = i;

    printf("%d \n", inicio->info);
    do{ printf("%d ",i);
	i++;
    }while(i<=ultimo);
    
    printf("\n"); 	

    ultimo++;
    fimLinha--;		
    for(int i=fimLinha;i<=ultimo;i++){
    	 printf("%d ",i);
    }	
}


void main(){
    Nodo *inicio = NULL;
    int n = 2;
   
    inserir(&inicio,n);
    do{ n--;
 	inserir(&inicio,n);	
    }while(n>0);

    mostraLista(inicio,n);
}


