#include<stdio.h>
#include<stdlib.h>
main(){
	printf("Qual sera o placar na sua opniao?\n");
	int timeA, timeB;
	scanf(" %d %d", &timeA, &timeB);
	printf("O resultado do jogo foi:\n");
	int resultA, resultB;
	scanf(" %d %d", &resultA, &resultB);
	int pontos=0;
	//acertou o nmr de gols de algum time
	if(timeA==resultA||timeB==resultB){
		pontos=5;
	}
	//Acertou o vencedor
	if(timeA>timeB&&resultA>resultB){
		pontos = pontos +10;
	}else if(timeA<timeB&&resultA<resultB){
		pontos = pontos +10;
	}
	//acertou empate
	if(timeA==timeB&&resultA==resultB){
		pontos=10;
	}
	//acertou tudo
	if(timeA==resultA&&timeB==resultB){
		pontos=20;
	}
	printf("Seu total de pontos e: %d\n", pontos);
	return 0;
}
