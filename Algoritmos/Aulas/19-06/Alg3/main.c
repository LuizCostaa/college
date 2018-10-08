#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
long long int v[100];
int n, i;
printf("Quantos termos?");
scanf("%d", &n);
v[0]=1;
v[1]=1;
for(i=2; i<n; i++){
	v[i] = v[i-1] + v[i-2];
}
for (i=0; i<n; i++){
	printf("%dº: %lld\n", i+1, v[i]);
}

	return 0;
}
