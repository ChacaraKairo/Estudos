#include<stdio.h>
#include<stdlib.h>
main()
{
	int al, lar, com, ar;
	
	printf("digite a largura da caixa:");
	scanf(" %d",&lar);
	printf("digite o comprimenrto da caixa:");
	scanf(" %d",&com);
	printf("digite a altura da caixa:");
	scanf(" %d",&al);
	ar = com * lar * al;
	printf("\n o volume da caixa e: %d \n", ar);
system("pause");	
}

