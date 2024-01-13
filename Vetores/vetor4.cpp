#include<stdio.h>
main(){
	int N[8];
	printf("escreva 8 numeros\n");
	int i;
	for(i=0;i<8;i++){
		scanf(" %d", &N[i]);
	}
	int j;
	for(i=0;i<8;i++){
		if(N[i]<N[i+1]){
			j=i;
		}
	}
	printf("O menor elemento de N e = %d e a sua posicao e: %d", N[j], j+1);
	return 0;
}
