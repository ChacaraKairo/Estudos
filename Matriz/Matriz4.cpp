#include<stdio.h>
main(){
	int matriz[3][3]={0}, vetor[3];
	int numero;
	printf("digiter os valores: ");
	int i, j, soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(numero<matriz[i][j]){
				numero=matriz[i][j];
			}
		}
	}
	printf(" %d", numero);
}
