#include<stdio.h>
#include<locale.h>

int main(){
	int floor, p, pp, total=0, x, resul;
		
		setlocale(LC_ALL,"portuguese");
		printf("\nQuantos andares tem o elevador? ");
		scanf("%d", &floor);
	for(x=0; x<=floor; x++){
		printf("%d andar\n\n", x);
		printf("quantas pessoas entraram? ");
		scanf("%d",&p);
		printf("quantas pessoas sairam? ");
		scanf("%d", &pp);
		
		total=total+p;
		total=total-pp;
		
		
			while(total>15){
				resul=total-15;
				printf("Exesso de passageiros, %d pessoas devem sair! \n", resul);
				printf("quantas pessoas sairam? ");
				scanf("%d", &pp);
				total=total-pp;
			}
	}
	printf("%d pessoas chegaram no ao topo", total);

	
}
