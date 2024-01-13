#include<stdio.h>
main(){
	int numA[20], numB[20], numC[20];
	int i;
	for(i=0;i<10;i++){
		printf("A: ");
		scanf(" %d", &numA[i]);
		printf("B: ");
		scanf(" %d", &numB[i]);
		numC[i]=numA[i]+numB[i];
	}
	printf("Vetor resultante: \n")
	for(i=0;i<10;i++){
		printf("%d ", numC[i]);
	}
	return 0;
	}
	
