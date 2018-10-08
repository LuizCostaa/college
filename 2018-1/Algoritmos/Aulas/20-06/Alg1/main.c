#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, matriz[4][3];
	for (i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("M[%d][%d]", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
