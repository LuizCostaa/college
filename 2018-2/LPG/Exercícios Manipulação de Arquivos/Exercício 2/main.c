#include <stdio.h>
#include <string.h>
//Programa que recebe um arquivo e diz quantas linhas ele contém

int main () {

	char c, linha = '\n';
    int linhas;

    FILE *arq;

    arq = fopen("ex2.txt","r");

    while(fread (&c, sizeof(char), 1, arq)) {
        if(c == linha) {
            linhas++;
        }
    } 

    printf("Total de linhas contidas no arquivo: %i\n",linhas + 1);

    fclose(arq);
    
    //fread(ponteiro ou endereço de memória, tamanho do arquivo, número de bytes, ponteiro para o arquivo)

}
