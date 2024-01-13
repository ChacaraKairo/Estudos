#include<stdio.h>
main(){
	int matriz[3][3]={0}, vetor[3];
	printf("digiter os valores: ");
	int i, j, soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		soma=soma+matriz[i][j];
		}
		vetor[i]=soma;
		soma=0;
	}
	for(i=0;i<3;i++){
			printf(" %d", vetor[i]);
	}
}
