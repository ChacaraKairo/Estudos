#include<stdio.h>
main(){
	float num[10];
	printf("digite 10 numeros\n");
	int i;
		float total=0;
	for(i=0;i<10;i++){
		scanf(" %f", &num[i]);
		total=num[i]+total;
	}
	for(i=0;i<10;i++){
		if(num[i]>(total/10))
		printf(" %g", media);
		printf("%g e maior que a media geral e esta na posicao %d\n", num[i], i+1);
	}
	return 0;
}
