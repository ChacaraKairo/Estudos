#include<stdio.h>
main(){
	int numA[10], numB[10];
	int i;
	for(i=0;i<10;i++){
		printf("A: ");
		scanf(" %d", &numA[i]);
		printf("B: ");
		scanf(" %d", &numB[i]);
	}
	// compara 1 por 1 de um so vetor e entra em um loop de gravação dentro de um if
	//compara A[j] com B[i++]depois soma 1 a j	
	int j=0, numC[10]={0};
	do{
		for(i=0;i<10;i++){
			if(numA[j]==numB[i]){
				numC[j]=numA[j];
			}
		}
		j++;
	}while(j<10);
	printf("O vetor e: %d\n", numC[i]);
	for(i=0;i<10;i++){
		printf("%d ", numC[i]);
	}
	return 0;
}
