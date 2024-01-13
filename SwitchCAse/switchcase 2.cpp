#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
		int tax;
	float taxa, valor;
	
	printf("qual o valor do produto?\n");
	
	scanf(" %f", &valor);
	printf("selecione a porcentagem 1, 2 ou 3\n");
	scanf(" %d", &tax);
	/*switch(tax){
	 	case 1: taxa = 1.15; 
		 break;
	 	case 2: taxa = 1.20; 
		 break;
	 	case 3: taxa = 1.30;
		  break;
	 	default : printf("taxa inexistente");
		 break;
	 }
	 valor = taxa*valor;
	if(tax > 3){
		return 0;
	} else{
		printf("O valor final e : R$ %.2f\n", valor);
	}*/
/*	taxa = (tax == 1) ? 1.15 : (tax == 2) ? 1.20 : (tax == 3) ? 1.30 : printf("taxa inexistente");
	valor = taxa*valor;
	printf("O valor final e : R$ %.2f\n", valor);*/
system("pause");	
}
