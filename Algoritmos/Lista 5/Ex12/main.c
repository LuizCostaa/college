#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[5], cont = 0, soma, i, soma1 = 0;
	float media, porc;
	for(i=0; i<5; i++){
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];	
	}
	
	
	media = (float)soma/5;
	
	
	for(i=0; i<5; i++){
		if (vetor[i] > media){
			soma1 = soma1 + vetor[i];
			printf("Os valores %d e sua respectiva posi��o %d\n", vetor[i], i);
			cont++;
		}
	}
	porc = ((float)cont/5)*100;
	printf("A m�dia �: %f\n", media);
	printf("Quantidade de valores acima da m�dia: %d\n", cont);
	printf("A soma dos valores acima da m�dia � %d\n", soma1);
	printf("A porcentagem �: %f ", porc);
	return 0;
}
