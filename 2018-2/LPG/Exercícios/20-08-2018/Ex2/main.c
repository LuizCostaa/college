#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float j, cont, s=0, n=1, m=1;
	scanf("%f", &n);
	j = n;
	
	for(cont=1; cont<=n; cont++){
		j++;
		m = m + 2;
		s = s + (n / m);
	}
	
	printf("%f", s);
	
	return 0;
}
