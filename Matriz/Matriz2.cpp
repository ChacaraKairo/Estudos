#include<stdio.h>
main(){
	int matriz[3][3]={0}, mati[3][3]={0};
	printf("digiter os valores: ");
	int i, j, soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf(" %d ", matriz[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mati[i][j]=matriz[j][i];
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf(" %d ", mati[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
