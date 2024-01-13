#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("digite um numero de uma 7: ");
	int a;
	scanf(" %d", &a);
	if(a==1){
		printf("domingo");
	}	if(a==2){
		printf("segunda");}
		if(a==3){
		printf("terca");}
		if(a==4){
		printf("quarta");}
		if(a==5){
		printf("quinta");}
		if(a==6){
		printf("sexta");}
		if(a==7){
		printf("sabado");}
		if(a<1||a>7){
			printf("numero invalido");
			return 0;
		}
	
}
