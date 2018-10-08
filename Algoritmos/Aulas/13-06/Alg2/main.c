#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[8] = {7, 61, 12, 11, 99, 75, -1, 12};
int n=8, i, chave;
printf("Digite o valor a ser buscado");
scanf("%d", &chave);
int cont=0;
for(i=0; i<n; i++){
	if(v[i] == chave){
		printf("Encontrado em %d\n", i);
		cont++;
	}
}
if(cont == 0){
	printf("Não encontrado \n");
} else {
	printf("Foram encontrados %d ocorrências \n", cont);
}	
	return 0;
}
