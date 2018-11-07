#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Programa que recebe um arquivo e diz quantas letras são vogais e quantas são consoantes

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int nVogais = 0, nConsoantes = 0;
	char c, verif;
		
	FILE *arq;
	
	arq = fopen("ex4.txt", "r");
	
	while (fread(&c, sizeof(char), 1, arq)){
		verif = tolower(c);
		if(verif==97||verif==101||verif==105||verif==111||verif==117){
			nVogais++;
		} else if (	verif==98||verif==99||verif==100||
					verif==102||verif==103||verif==104||
					verif==106||verif==107||verif==108||
					verif==109||verif==110||verif==112||
					verif==113||verif==114||verif==115||
					verif==116||verif==118||verif==119||
					verif==120||verif==121||verif==122)
		{
			nConsoantes++;
		}
	}
	
	printf("Número de vogais: %i\n", nVogais);
	printf("Número de consoantes: %i", nConsoantes);
	
}
