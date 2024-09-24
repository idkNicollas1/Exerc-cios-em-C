#include<stdio.h>
#include<locale.h>

int main(){
	int yo, myo=0, totalP=0;
	char res='s', sx;
	float hei,lhei=0;
		
		setlocale(LC_ALL,"portuguese");
		
		while(res!='n' && res=='s'){
		printf("Qual seu sexo (F/M)? ");
		scanf("%s", &sx);
		printf("Qual sua altura? ");
		scanf("%f", &hei);
		if(sx=='f' || sx=='F')
			if(lhei<hei)
			lhei=hei;
		printf("Qual a sua idade? ");
		scanf("%d", &yo);
		if(yo>myo)
		myo=yo;
		totalP++;
		printf("\nDeseja continuar (s/n)? ");
		scanf("%s", &res);
		}
		printf("Toatal de participantes: %d \n", totalP);
		
		printf("mulher mais baixa: %.2fm \n", lhei);
		
		printf("Pessoa mais velha: %d \n", myo);
	}
