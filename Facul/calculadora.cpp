#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int select_menu, a[100], b[100], c[200];
	printf("================================================================================ \n");
	printf("                             Bem vindo ao Conjunct                               \n");
	printf("================================================================================ \n");
	printf("Selecione a opção desejada conforme a lista abaixo: \n");
	printf("[1] - Inserção de valores nos conjuntos A ou B \n");
	printf("[2] - Remoção de todos os valores de um conjunto \n");
	printf("[3] - Exibição dos valores contidos nos conjuntos \n");
	printf("[4] - União dos conjuntos \n");
	printf("[5] - Intersecção \n");
	printf("[6] - Diferença \n");
	printf("[7] - Verifica se um vetor está contido em outro \n");
	printf("================================================================================ \n");
	
	scanf("%d", &select_menu);


//	Opção 1 do menu
	int P, x, select_f1, i, buscar;
	if (select_menu == 1) {
		printf("Está é uma opção aonde você irá digitar os valores dos conjuntos usando como critério de parada a letra P \n");
		printf("[1] - Conjunto A \n");
		printf("[2] - Conjunto B \n");
		printf("================================================================================ \n");
		scanf ("%d", &select_f1);
		if (select_f1 == 1) {
			printf ("Insira os valores do conjunto A: \n");
			for (i = 0; i < 100; i++) {
				printf ("Indice %d= ", i);
				scanf ("%d", &a[i]);							
				if (a[i] == P) {
					break;
				}
			}
		} 
		if (select_f1 == 2) {
			printf ("Insira os valores do conjunto B: \n");
			for (i = 0; i < 100; i++) {
				printf("Indice %d= ", i);
				scanf("%d", &b[i]);
				if (b[i] == P) {
					break;
				}
			}
		}
	}
//	Oção 2 do menu
// Opção para remover os valores de um conjunto
	else if (select_menu == 2) {
		int select_f2, i;
		printf("================================================================================ \n");
		printf("Esta é uma opção que apaga os valores contidos em um dos conjuntos\n");
		printf("Selecione o conjunto desejado conforme a tabela \n");
		printf("[1] - Conjunto A \n");
		printf("[2] - Conjunto B \n");
		printf("================================================================================ \n");
		scanf("%d", &select_f2);
		if (select_f2 == 1) {
			for(i=0; i<100; i++) {
				a[i] = 0;
			}
		}
		else if (select_f2 == 2) {
			for (i=0; i<100; i++) {
				b[i] = 0;
				printf("%d", b[i]);
			}
		}
		else {
			printf("ALERTA: Conjunto inexistente");
		}
	}	
	
	
//	Opção 3 do menu
	else if (select_menu == 3) {
	int i;
		for (i = 0; i < 10; i++) {
			if (a[i] || b[i] == 0) {
				printf ("Não existem valores nos conjuntos\n");
			} 
			else if (a[i] || b[i] != 0) {
				printf ("Valores contidos no conjunto A e B\n");
				for (i = 0; i < 10; i++) {
					printf ("%d\n", a[i]);
					printf("================================================================================ \n");
					printf ("%d\n", b[i]);
				}
			}
		}
	}	
	
	
//	Opção 4 do menu
// Opção para realizar a União dos dois vetores
	else if (select_menu == 4) {
		int i, select_f4;
		printf("Esta é uma opção que realiza a união dos conjuntos\n");
		printf("Selecione o primeiro conjunto a ser inserido, conforme a tabela\n");
		printf("[1] - Conjunto A\n");
		printf("[2] - Conjunto B\n");
		scanf("%d", &select_f4);
		a[2]=7, a[9]=1;
		if(select_f4 == 1){
			for(i=0; i<100; i++);
			c[i] = a[i];
			printf("%d", c[i]);
		}
		else if (select_f4 == 2){
			
		}
		else {
			printf("ALERTA: Opção Inválida");
		}
	} 
	
	
//	Opção 5 do menu
	else if (select_menu == 5) {
	printf("================================================================================ \n");
		int i,j;
		for (i = 0; i < 10; i++) {
			for (j = 0; j < 10; j++) {
				if (a[i] == b[j]) {
					a[i] = c[i];
				}
			}
		}
		for (i = 0; i < 10; i++) {
			printf ("%d\n",c[i]);
		}
	}
	
	
//	Opção 6
	else if (select_menu == 6) {
		printf("Opção 6");
	}
	
	
//	Opção 7
	else if (select_menu == 7){
		printf("Opção 7");
	} else {
		printf("ALERTA: Opção Inexistente");
	}
	
	return 0;
}
