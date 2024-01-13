#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	printf("qual o seu peso e sua altura?\n");
	float a, p;
	printf("Kg ");
	scanf(" %f", &p);
	printf("m: ");
	scanf(" %f", &a);
	if(30<(p/a*a))
	{
		printf("obeso\n");
	}if(25<(p/a*a)&&(p/a*a)<30)
	{
	printf("acima do peso\n");	
	}if(18.5<(p/a*a)&&(p/a*a)<25)
	{
	printf("peso normal\n");	
	}if(18.5>(p/a*a))
	{
	printf("abaixo do peso\n");	
}
	
		
system("pause");	
}
