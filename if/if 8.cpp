//inicio
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	printf("Qual o valor do produto?\n");
	float a;//valor inicial do produto
	printf("R$ ");
	scanf(" %f", &a);
	printf("Qual sera o reajuste do produto?\n");
	printf("[1] 15%%\n");
	printf("[2] 20%%\n");
	printf("[3] 30%%\n");
	int b;//reajuste
	scanf(" %d", &b);
	if(b==1){
		a = a * 1.15;
	}if(b==2){
		a = a * 1.20;
	}if(b==3){
		a = a * 1.30;
	}
	printf("o novo valor e: R$ %g\n", a);
system("pause");	
}
