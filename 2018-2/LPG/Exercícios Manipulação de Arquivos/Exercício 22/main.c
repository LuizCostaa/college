#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	char name1[50], name2[50], name[40];
	int nota1, nota2, nota3, notasOrg[3];
	
	FILE *arq, *arq2;
	
	printf("Insira o nome do arquivo a ser lido: ");
	scanf("%s", &name1);
	arq = fopen(strcat(name1, ".txt"), "r");
	if(arq == NULL) {
		printf("Não foi possível abrir o arquivo");
		exit(1);
	}
	printf("Insira um nome de arquivo para repassar a string: ");
	scanf("%s", &name2);
	arq2 = fopen(strcat(name2, ".txt"), "w");
	
	fscanf(arq, "%s %d %d %d", &name, &nota1, &nota2, &nota3);
	
	fprintf(arq2, "%s %d %d %d", name, nota1, nota2, nota3);
}
