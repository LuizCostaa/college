#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int entrada[9], i;
	char b[10];
	
	FILE *arq;
	arq = fopen("ex16.txt", "a");
	
	for(i=0;i<10;i++){
		scanf("%d", &entrada[i]);
		fprintf(arq, "%s \n", itoa(entrada[i], b, 2));
	}

}
