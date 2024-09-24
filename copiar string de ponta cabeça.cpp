#include <stdio.h>
#include <string.h>

main () {
	char i, j, x, msg[100], gsm[100];
	
	printf("O que vc escrever sera reescrito de tras para frente: ");
	gets(msg); 
	
	x = strlen(msg);
	
	for(i=x-1; i>=0; i--) { // x(Tamanho - 1), pq a ultima posição é \0
		gsm[j] = msg[i];
		j++;
	}
	
	gsm[j] = '\0'; // para limpar e garantir q a string nao será exibida com sujeira
	printf("%s", gsm);
	
}
