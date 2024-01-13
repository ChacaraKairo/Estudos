#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	printf("digite o codigo do produto : ");
	int a;
	scanf(" %d", &a);
/*switch(a){
	 	case 1 : printf("Alimento nao perecivel\n"); break;
	 	case 2 ... 4 :printf("Alimento perecivel\n") ; break;
	 	case 5 ... 6 :printf("Vestuario\n") ; break;
	 	case 7 :printf("Higiene pessoal\n") ; break;
	 	case 8 ... 15 :printf("Limpeza e utensílios domésticos\n") ; break;
	 	default :printf("Invalido\n") ;break;
	 } */ 
	(a == 1) ? printf("Alimento não-perecível\n"):(a >=2 && a <=4) ? printf("Alimento perecivel\n"):(a==5 && a==6) ? printf("Vestuario\n"):(a == 7) ? printf("Higiene pessoal\n"):
	(a>= 8&&a <= 15) ? printf("Limpeza e utensílios domésticos\n"):printf("Invalido\n");
system("pause");	
} 
