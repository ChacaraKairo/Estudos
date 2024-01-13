#include<stdlib.h>
#include<stdio.h>
int main(){
	printf("Voce aceita se casar novamente cmg?\n");
	printf("S para Sim e N para Nao\n");
	char resposta;
	scanf(" %c", &resposta);
	if (resposta == 'S' || resposta == 's'){
		for(resposta;resposta == 's' || resposta == 'S';){
			printf("Quer msm?");
		scanf(" %c", &resposta);
		}
	}scanf(" %c", &resposta);
 if(resposta == 'N' || resposta == 'n'){
		printf("Vai se danar");
	}
	return 0;
}
