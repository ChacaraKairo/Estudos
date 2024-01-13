#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	printf("digite dois numeros inteiros\n");
	int a, b, c;
	scanf(" %d %d", &a, &b);
	char sinal;
	printf("escolha uma das quatro operações basicas pelo sinal +, -, *, /.\n");
	scanf(" %c", &sinal);
/*	switch(sinal){
	 	case '+' : c = a + b; 
		 break;
	 	case '-' : c = a - b; 
		 break;
	 	case '/' : c = a / b; 
		 break;
	 	case '*' : c = a * b; 
		 break;
	 	default : printf("esta operacao nao exixte");
		 break;
	 } 
	 if(sinal != '+' && sinal != '-' && sinal != '*' &&  sinal != '/'){
	 	return 0;
	 }else {
	 	printf("o resultado e: %d\n", c);
}*/
/*(sinal == '+' )? c = a + b : (sinal == '-') ? c = a - b : (sinal == '*' )? c = a * b : (sinal == '/') ? c = a / b : printf("esta operacao nao exixte");
if(sinal != '+' && sinal != '-' && sinal != '*' &&  sinal != '/'){
	 	return 0;
	 }else {
	 	printf("o resultado e: %d\n", c);*/
system("pause");	
}}
