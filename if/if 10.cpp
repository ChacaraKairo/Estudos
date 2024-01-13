#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("qual o seu sexo?\n");
	printf("Masculino? use M\nFeminino? use F\n");
	char sexo;
	scanf(" %s", &sexo);
	if(sexo != 'F' && sexo!= 'M'){
	printf("sexo invalido");
	return 0;	
	}
	printf("qual o sua altura?\n");
	float alt ,m;
	scanf(" %f", &alt);
	if(sexo =='M' || sexo =='m' ){
	m=(72.7*alt)-58;
	}else if (sexo =='F' || sexo =='f' ){
	m=(62.1*alt)-44.7;}
	printf("Seu peso ideal e:\nKG%g\n", m);
	return 0;
}
