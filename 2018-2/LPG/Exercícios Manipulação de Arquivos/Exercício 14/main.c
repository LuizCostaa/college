#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char c, name[20];
	int dia, mes, ano, anoAtual, idade;
	
	FILE *arq, *arq2;
	
	arq = fopen("ex14.txt", "r");
	arq2 = fopen("ex14-2.txt", "a");
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	while(fread (&c, sizeof(char), 1, arq)) {
 		fscanf(arq, "%s %d %d %d", &name, &dia, &mes, &ano);
 		
 		idade = anoAtual - ano;
 		
 		fprintf(arq2, "%s tem %d anos\n", name, idade);
    }
			
	fclose(arq);

}
