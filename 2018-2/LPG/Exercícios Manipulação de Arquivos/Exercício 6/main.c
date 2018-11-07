#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Programa que faz a contagem de quantas vezes cada letra aparece dentro de um arquivo

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int a=0, b=0, c=0, d=0, e=0, f=0; 
	int g=0, h=0, i=0, j=0, k=0, l=0; 
	int m=0, n=0, o=0, p=0, q=0, r=0; 
	int s=0, t=0, u=0, v=0, w=0, x=0;
	int y=0, z=0;

	char in, verif; 
	
	FILE *arq;
	
	arq = fopen("ex6.txt", "r");
	
	while(fread(&in, sizeof(char), 1, arq)){
		verif = tolower(in);
		
		if(verif >= 97 && verif <= 122){
			if(verif==97) { a++; }			
			if (verif==98){	b++; }			
			if (verif==99){ c++; }
			if (verif==100){ d++; }
			if (verif==101){ e++; }
			if (verif==102){ f++; }
			if (verif==103){ g++; }
			if (verif==104){ h++; }
			if (verif==105){ i++; }
			if (verif==106){ j++; }
			if (verif==107){ k++; }
			if (verif==108){ l++; }
			if (verif==109){ m++; }
			if (verif==110){ n++; }
			if (verif==111){ o++; }
			if (verif==112){ p++; }
			if (verif==113){ q++; }
			if (verif==114){ r++; }
			if (verif==115){ s++; }
			if (verif==116){ t++; }
			if (verif==117){ u++; }
			if (verif==118){ v++; }
			if (verif==119){ w++; }
			if (verif==120){ x++; }
			if (verif==121){ y++; }
			if (verif==122){ z++; }	
		}	
	}
	
	printf("A: %i\n", a);
	printf("B: %i\n", b);
	printf("C: %i\n", c);
	printf("D: %i\n", d);
	printf("E: %i\n", e);
	printf("F: %i\n", f);
	printf("G: %i\n", g);
	printf("H: %i\n", h);
	printf("I: %i\n", i);
	printf("J: %i\n", j);
	printf("K: %i\n", k);
	printf("L: %i\n", l);
	printf("M: %i\n", m);
	printf("N: %i\n", n);
	printf("O: %i\n", o);
	printf("P: %i\n", p);
	printf("Q: %i\n", q);
	printf("R: %i\n", r);
	printf("S: %i\n", s);
	printf("T: %i\n", t);
	printf("U: %i\n", u);
	printf("V: %i\n", v);
	printf("W: %i\n", w);
	printf("X: %i\n", x);
	printf("Y: %i\n", y);
	printf("Z: %i\n", z);
	
}
