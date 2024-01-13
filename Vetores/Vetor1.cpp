#include<stdio.h>
main(){
	int numero[6];
	printf("Escreva 6 numeros\n");
	int i;
	for(i=0;i<6;i++){
		scanf(" %d", &numero[i]);
	}
for(i=0;i<6;i++){
	if(numero[i]<0){
		printf(" %d", numero[i]);
	} 
}
}
