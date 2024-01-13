#include<stdio.h>
main(){
	printf("digite os salarios\n");
	float salario[12], total=0, media=0;
	int i;
	for(i=0;i<10;i++){
		scanf(" %f", &salario[i]);
		total=total+salario[i];
	}
	media=total/12;
	printf("O salario anual e: R$%.2f\n", total);
	printf("A media mensal e: R$%.2f\n", media);
	return 0;
}
