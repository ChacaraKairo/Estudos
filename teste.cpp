#include<stdio.h>
main(){
	printf("digite um valor de 0 a 10\n");
	int hora, minuto=0;
	scanf(" %d", &hora);
	while(hora >=0 && minuto>=-1){
		minuto--;
		if(minuto == -1){
			minuto = 59;
			hora--;
			if(hora == -1){
				return 0;
			}
		}
		printf(" %d:%d\n ", hora, minuto);
	}
}
