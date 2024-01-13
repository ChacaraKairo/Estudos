#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double x, y, z, q;
	printf("digite 3 numeros quisquer:\n");
	printf("a:");
	scanf(" %lf", &x);
	printf("b:");
	scanf(" %lf", &y);
	printf("c:");
	scanf(" %lf", &z);
	q=pow(x,2)+pow(y,2)+pow(z,2);
	printf("a soma dos quadrados deles e: %g\n", q);
system("pause");	
}

