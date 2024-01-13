#include<stdio.h>
main()
{
	printf("digite um nuemro inteiro\n");
	int a;
	scanf(" %d", &a);
	if (a>10){
		a=a*2;
		printf(" \n%d", a);
	}
	else
	{a=a*3;
	printf("\n%d", a);
	}
}
