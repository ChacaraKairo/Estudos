#include<stdio.h>
main()
{
	int a, b, c;
	printf("declare os lados de um triangulo");
	scanf(" %d, %d, %d", &a, &b, &c);
	if(a+b<c||a+c<b||b+c<a){
		printf("falhou");
	}
	if(a==b && b==c){
		printf("equilatero");
		
	}
	else 
	if(a==b|| a==c|| b==c){
	
		printf("isoceles");}
		else{
			printf("escaleno");
		}
		
	
		
	}

