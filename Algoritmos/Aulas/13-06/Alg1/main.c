#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float v[20];
	int i;
	for (i= 0; i<20; i++){
		printf("Digite o %d valor", i+1);
		scanf("%f", &v[i]);
	}
	for (i=0; i<20; i++){
		printf("%i%f\n", i, v[i]);
	}
	return 0;
}
