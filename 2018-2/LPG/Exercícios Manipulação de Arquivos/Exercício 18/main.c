#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char c, nome[20];
	float preco, precoTotal;
	
	FILE *arq;
	
	arq = fopen("ex18.txt", "r");
	
	while(fread (&c, sizeof(char), 1, arq)) {
 		fscanf(arq, "%s %f", &nome, &preco);
 		
 		precoTotal = precoTotal + preco;
    }
    
    printf("O preço total da compra foi de: %f", precoTotal);
			
	fclose(arq);
	
}
