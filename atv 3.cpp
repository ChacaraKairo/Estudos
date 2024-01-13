#include<stdio.h>
#include<stdlib.h>
main()
{
	int bs, al, ar;
	
	printf("digite o atamnho da base do triangulo:");
	scanf(" %d",&bs);
	printf("digite a altura do triangulo:");
	scanf(" %d",&al);
	ar = bs * al / 2;
	printf("\n a area do triangulo e: %d \n", ar);
system("pause");	
}

