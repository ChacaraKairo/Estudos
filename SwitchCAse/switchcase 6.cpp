/*
Código?

Condição de pagamento?

1?

À vista em dinheiro ou cheque, recebe 10% de desconto?

2?

À vista no cartão de crédito, recebe 5% de desconto?

3?

Em duas vezes, preço normal de etiqueta sem juros?

4?

Em três vezes, preço normal de etiqueta mais juros de 10%?

*/
#include<stdio.h>
#include<stdlib.h>
main(){
		float produto;
			int  condicao;
	printf("qual o valor do produto?\nR$ ");
	scanf(" %f", &produto);
	printf("qual a condicao de pagamento?\n");
	scanf(" %d", &condicao);
/*	switch(condicao){
		case 1: produto = produto * 0.9; break;
		case 2: produto = produto * 0.95; break;
		case 3: produto = produto / 2 ;break;
		case 4: produto = (produto * 1.1) / 3 ;break;
		default : printf("metodo inexistente");break;
	}if(condicao == 1 || condicao == 2){	
	printf("O valor a se pagar e:\nR$ %.2f", produto);}
	else if(condicao == 3 || condicao == 4){
		printf("O valor das parcelas e: R$ %.2f", produto);
	}*/
	(condicao == 1) ? produto = produto * 0.9 : (condicao == 2) ? produto = produto * 0.95 : (condicao == 3) ? produto = produto / 2 :
	(condicao == 4) ? produto = (produto * 1.1) / 3 : printf("metodo inexistente");
	if(condicao == 1 || condicao == 2){	
	printf("O valor a se pagar e:\nR$ %.2f", produto);}
	else if(condicao == 3 || condicao == 4){
		printf("O valor das parcelas e: R$ %.2f", produto);
	return 0;
}}
