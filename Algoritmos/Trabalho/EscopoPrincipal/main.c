#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		setlocale (LC_ALL, "Portuguese");
		int select_menu, a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, b[100] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11}, c[200], ind_a = 5, ind_b = 5;
		do {
		printf("                                                                                 \n");
		printf("================================================================================ \n");
		printf("                             Bem vindo ao Conjunct                               \n");
		printf("================================================================================ \n");
		printf("Selecione a op��o desejada conforme a lista abaixo: \n");
		printf("[1] - Inser��o de valores nos conjuntos A ou B \n");
		printf("[2] - Remo��o de todos os valores de um conjunto \n");
		printf("[3] - Exibi��o dos valores contidos nos conjuntos \n");
		printf("[4] - Uni�o dos conjuntos \n");
		printf("[5] - Intersec��o \n");
		printf("[6] - Diferen�a \n");
		printf("[7] - Verifica se um vetor est� contido em outro \n");
		printf("[0] - Finaliza o programa \n");
		printf("================================================================================ \n");
		
		scanf("%d", &select_menu);
	
	
	//	Op��o 1 do menu
		int P, select_f1, i;
		if (select_menu == 1) {
			printf("Est� � uma op��o aonde voc� ir� digitar os valores dos conjuntos usando como crit�rio de parada a letra P \n");
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
		system("CLS");
		}
	//	O��o 2 do menu
	// Op��o para remover os valores de um conjunto
		else if (select_menu == 2) {
			int select_f2, i;
			printf("================================================================================ \n");
			printf("Esta � uma op��o que apaga os valores contidos em um dos conjuntos\n");
			printf("Selecione o conjunto desejado conforme a tabela \n");
			printf("[1] - Conjunto A \n");
			printf("[2] - Conjunto B \n");
			printf("================================================================================ \n");
			scanf("%d", &select_f2);
			if (select_f2 == 1) {
				for(i=0; i<10; i++) {
					a[i] = 0;
					printf("%d, ", a[i]);
					ind_a = 0;
				}
			}
			else if (select_f2 == 2) {
				for (i=0; i<100; i++) {
					b[i] = 0;
					printf("%d", b[i]);
					ind_b = 0;
				}
			}
			else {
				printf("ALERTA: Conjunto inexistente");
			}
		system("CLS");
		}	
		
		
	//	Op��o 3 do menu
		else if (select_menu == 3) {
			int select_f3; 
			printf("=========================================================================\n");
			printf("Selecione o conjunto que deseja mostrar os valores confome o menu abaixo: \n");
			printf("[1] - Conjunto A\n");
			printf("[2] - Conjunto B\n");
			printf("=========================================================================\n");
			scanf("%d", &select_f3);
			if(select_f3 == 1){
				for(i=0; i<100; i++){
					if (a[i] != 0){
						printf("%d, ", a[i]);
					}
				}
				if (ind_a == 0){
					printf("ERRO: Ainda n�o foram inseridos valores no vetor A");
				}
			}
			else if(select_f3 == 2){
				for(i=0; i<100; i++){
					if (b[i] != 0){
						printf("%d, ", b[i]);
					} 
				} 
				if (ind_b == 0){
					printf("ERRO: Ainda n�o foram inseridos valores no vetor B");
				}
			}
			
		system("CLS");		
		}	
		
		
	//	Op��o 4 do menu
	// Op��o para realizar a Uni�o dos dois vetores
		else if (select_menu == 4) {
			int select_f4, i, j, x;
			printf("Esta � uma op��o que realiza a uni�o dos conjuntos\n");
			printf("Resultado da uni�o entre os dois vetores, com os n�meros inseridos at� o momento: \n");
		    for(i=0; i<100; i++){
		    	c[i] = a[i];
			}
			for (j=0; j<100; j++){
				c[j + 100] = b[j];
			}
			for (x=0; x<200; x++){
				if (c[x] != 0 ){
					printf("%d, ", c[x]);
				}
			}
			
		}
				
		
	//	Op��o 5 do menu
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
		system("CLS");
		}
		
		
	//	Op��o 6
		else if (select_menu == 6) {
		int select_f6; 
		printf("================================================================================ \n");
		printf("Esta fun��o verifica a diferen�a dos vetores\n");
		printf("Selecione a ordem de execu��o do pograma conforme o menu abaixo: \n");
		printf("[1] - A - B\n");
		printf("[2] - B - A\n");
		printf("================================================================================ \n");
		scanf("%d", &select_f6);
		if (select_f6 == 1) {
			
		}
		else if (select_f6 == 2) {
			printf("Teste2 \n");
		}
		else {
			printf("ALERTA = Op��o n�o existe \n");
		}
		
		
		}
		
		
	//	Op��o 7
		else if (select_menu == 7){
			printf("Op��o 7");
			
		system("CLS");
		}
		
		else if (select_menu == 0){
			break;
		}
		 else {
			printf("ALERTA: Op��o Inexistente");
			break;
		}
} while (select_menu != 0);
		return 0;
}
