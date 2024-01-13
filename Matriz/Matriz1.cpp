#include<stdio.h>
main(){
	int matir[4][4];
	printf("digiter os valores");
	int i, j, soma=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf(" %d", &matir[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				soma=soma+matir[i][j];
				printf(" %d ", soma);
			}
		}
	}
	puts("\n");
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		printf(" %d ", matir[i][j]);
			}
			printf("\n");
		}

	printf(" %d", soma);
	return 0;	
}
