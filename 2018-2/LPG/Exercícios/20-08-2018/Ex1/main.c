#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, n;
	float H;
	
	puts("Digite um número inteiro: ");
	scanf("%d", &n);
	
	H=0;
	
	for(i=1; i<=n; i++){
		H = H + (float)1 / i;
	}
	
	printf("%f", H);
	
	
	return 0;
}
