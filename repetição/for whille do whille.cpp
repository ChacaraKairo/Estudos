#include<stdio.h>
#include<stdlib.h>
main(){
	printf("escreva um numero inteiro\n");
	int num, a;
	scanf(" %d",&num);
	printf("for=");
	for (a = 0; a < num; a++)
	printf(" *");
	printf("\nwhile=");
	a=0;
    while(a<num){
		printf(" *");
		a++;
	}
	printf("\ndo_while=");
	a=0;
	do{	printf(" *");
		a++;
	}while( a < num);
}

