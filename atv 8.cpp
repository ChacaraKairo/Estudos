#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float nta ,ntb , ntc, psa, psb, psc, mf;
	
	printf("digite as 3 notas e seus pesos em sequencia\n");
	printf("nota a:");
	scanf(" %f", &nta);
	printf("peso a:");
	scanf(" %f", &psa);
	printf("nota b:");
	scanf(" %f", &ntb);
	printf("peso b:");
	scanf(" %f", &psb);
	printf("nota c:");
	scanf(" %f", &ntc);
	printf("peso c:");
	scanf(" %f", &psc);
	mf = (nta * psa + ntb * psb + ntc *psc) / (psa + psb + psc);
	printf("A media final e: %f",mf);
	
system("pause");	
}

