#include <stdio.h>
#include <string.h>

main () {
	
	int i, cont=0;
	char nm[100], letr, p[100];
	
	printf("Insira seu nome: ");
	gets(nm);
	printf("Insira uma letra: ");
	scanf("%c", &letr);
	
	for(i=0; i<strlen(nm); i++) {
		p[i] = nm[i];
		
		if(p[i] == letr) {
		cont++;
		}
	}
	printf("A letra '%c' foi exibida %d vezes", letr, cont);

}
