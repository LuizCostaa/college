#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Programa que l� o conte�do de um arquivo e converte as ma�usculas para min�sculas e as min�sculas para mai�sculas
//arquivo ex8.txt j� contem um texto como exemplo a ser convertido
void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char c, name1[50], name2[50];
	
	FILE *arq, *arq2;
	
	printf("Insira o nome do arquivo a ser lido: ");
	scanf("%s", &name1);
	arq = fopen(strcat(name1, ".txt"), "r");
	if(arq == NULL) {
		printf("N�o foi poss�vel abrir o arquivo");
		exit(1);
	}
	e
	printf("Insira um nome de arquivo para repassar a string: ");
	scanf("%s", &name2);
	arq2 = fopen(strcat(name2, ".txt"), "w");
	
	while(fread(&c, sizeof(char), 1, arq)){
		if(c > 64 && c < 91 || c > 96 && c < 123 ) {
			fprintf(arq2, "%c", toupper(c));
		}
	}
	
	fclose(arq2);
	fclose(arq);
	
}
