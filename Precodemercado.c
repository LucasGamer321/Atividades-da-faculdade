#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float preco[] = {10.50, 8.99, 6.99, 23.70, 32.99, 1.99, 0.99, 15.89, 49.90, 5.99};
	int contador, indice;
	float temp;
	char tempProduto[30];
	int numero = 10;
	char produto[10][30] = {"Coca-Cola", "Tapioca", "Amaciante", "Vinho", "Sorvete", "Chiclete", "Bala", "Brinquedo", "Picanha", "Feijao"};
	
	printf("LISTAGEM DE PRODUTOS SUPERMERCADO:\n\n");
	
	for(contador=0;contador<10;contador++){
		printf("%s =  %.2f\n", produto[contador], preco[contador]);
	}
	printf("----------------------------------------------------\n");
	for(contador=0;contador<numero-1;contador++){
		for(indice=0;indice<numero-1-contador;indice++){
			if(preco[indice] > preco[indice+1]){
				
				temp = preco[indice];
				preco[indice] = preco[indice+1];
				preco[indice+1] = temp;
				
				strcpy(tempProduto, produto[indice]);
    			strcpy(produto[indice], produto[indice+1]);
    			strcpy(produto[indice+1], tempProduto);
			}
		}
	}
		printf("LISTAGEM DE PRODUTOS EM ORDEM CRESCENTE:\n\n");
	for(contador=0;contador<numero;contador++){
		printf("%s = %.2f\n",produto[contador], preco[contador]);	
	}
	for(contador=0;contador<numero-1;contador++){
		for(indice=0;indice<numero-1-contador;indice++){
			if(preco[indice] < preco[indice+1]){
				
				temp = preco[indice];
				preco[indice] = preco[indice+1];
				preco[indice+1] = temp;
				
				strcpy(tempProduto, produto[indice]);
    			strcpy(produto[indice], produto[indice+1]);
    			strcpy(produto[indice+1], tempProduto);
			}
		}
	}	printf("------------------------------------------------\n");
		printf("LISTAGEM DE PRODUTOS EM ORDEM DECRESCENTE:\n\n");
		for(contador=0;contador<numero;contador++){
			printf("%s = %.2f\n",produto[contador], preco[contador]);
		
		}
}