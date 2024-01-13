#include<stdio.h>
main(){
int num[10];
printf("Escreva numeros aleatorios\n");
int i;
for(i=0;i<10;i++){
scanf(" %d", &num[i]);
}
for(i=9;i>-1;i--){
	printf(" %d", num[i]);
}
}

