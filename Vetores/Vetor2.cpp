#include<stdio.h>
main(){
	int A[10];
	printf("Escreva 10 numeoros\n");
	int i;
	for(i=0;i<10;i++){
		scanf(" %d", &A[i]);
	}
	for(i=0;i<10;i++){
		if(A[i]==10){
			printf(" a posiçao que possui 10 e: %d\n", i+1);
		}
	}
}
