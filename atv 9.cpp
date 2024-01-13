#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float sl;
	printf("qual o valor do salario atual?\n");
	scanf(" %f", &sl);
	sl = sl * 1.25;
	printf("o salario atual e de : R$ %g\n", sl);
	system("pause");	
}
