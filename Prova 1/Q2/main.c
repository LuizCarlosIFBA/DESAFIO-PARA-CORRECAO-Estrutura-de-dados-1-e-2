//CÓDIGO BASE PARA APLICAR A SUA LINHA DE RACIOCÍNIO 

#include <stdio.h>
//Pode usar esse código como base a aplicar vetores juntamente com a estrutura lista, 
//para solucioná-lo. FAÇA AS MODIFICAÇÕES QUE ACHAREM NECESSÁRIAS

int main(void) {
	int col,j;
 	int anterior;

 	int n =4;
 	
	anterior = 1;
 	printf("%d\n",anterior);

 	int linha_atual = 1;
	col = 2;
	linha_atual = 1;
	for(j=1;j<col && linha_atual <= n;) {
		if(j==1) printf("1 ");
  	        anterior = anterior*(linha_atual-j+1)/j;
   		printf("%d ", anterior);
   		j++;
   		if (j == col) {
			anterior = 1;
			linha_atual++;
			col = linha_atual+1;
			j=1;
			printf("\n");
   		}
	}
}

