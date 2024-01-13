#include<stdio.h>
#include<stdlib.h>
main(){
	int num, result = 0;
	printf(" a soma dos numeros pares a partir desse numero ate 50 e:\n");
	for(num=0;num<=50;){
		printf(" %d", num);
		result = result + num;
		num=num+2;
	}
	printf(" %d", result);
	return 0;
		/*printf("Digite um número inteiro\n");*/
		/*scanf(" %d", &num);*/
		/*if(num%2==1){
		num++;
	}
	printf("a soma dos numeros pares a partir desse numero ate 50 e\n");
	for(num;num<=50;){
		printf(" %d\n", num);
		result = result + num;
		num=num+2;
	}
	printf(" %d", result);*/
}0
