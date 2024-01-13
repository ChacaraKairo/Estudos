//inicio
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	printf("digite dois numeros quaisquer\n");
	int a1, b1;
	scanf(" %d %d", &a1, &b1);
	printf("qual operação você deseja realizar?\n");
	printf("[a] adicao\n");
	printf("[b] subtracao\n");
	printf("[c] divisao\n");
	printf("[d] miltiplicacao\n");
	char a;
	scanf(" %c", &a);
	if(a=='a'){
		a1=a1+b1;
	}
		if(a=='b'){
		a1=a1-b1;}
			if(a=='c'){
		a1=a1/b1;}
			if(a=='d'){
		a1=a1*b1;}
		printf("o resultado e: %d\n", a1);
		system("pause");
		
}
