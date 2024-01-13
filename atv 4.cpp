#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	const double pi=3.141592;
main()
{

	double r, ar;
	
	printf("digite o raio do circulo:");
	scanf(" %lf",&r);
	ar = pi*pow(r,2);
	printf("\n a area do circulo e: %lf \n",ar);
	system("pause");
}

