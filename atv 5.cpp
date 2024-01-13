#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int tp;
	float pres, val;
	double tax;
	
	printf("Determine o valor original:");
	scanf(" %f", &val);
	printf("Determine a taxa:");
	scanf(" %lf", &tax);
	printf("determine o tempo de atraso em meses:");
	scanf(" %d", &tp);
	pres=val+(val*(tax/100)*tp);
	printf("a prestacao atual e: %g\n", pres);
	
	system("pause");	
}
