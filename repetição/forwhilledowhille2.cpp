#include<stdio.h>
#include<stdlib.h>
main(){
	printf("Horas:");
	long long int hora, minuto=0;
	scanf("%lld", &hora);
printf("%lld:00\n", hora);
do{minuto--;
	if(minuto == -1){
		minuto = 59;
		hora--;}
		
		if(minuto<10){
			printf("%d:0%d\n", hora, minuto);}
			else{
			printf("%d:%d\n", hora, minuto);}}
			while(hora>0 || minuto>0);
		}
/*printf("%d:00\n", hora);
	minuto=60;
while(hora>0 || minuto > 0){
minuto--;
	if(minuto == -1){
		hora--;
		minuto = 59;
		}
		if(minuto<10){
			printf("%d:0%d\n", hora, minuto);}
			else{
			printf("%d:%d\n", hora, minuto);}}

}*/
/*for(minuto,hora;minuto>-1 || hora >0;minuto--){
	if(minuto==-1){
		minuto = 59;
		hora--;
	}
	if(minuto<10){
		printf("%d:0%d\n",hora, minuto);
	}else{
		printf("%d:%d\n",hora, minuto);
	}	
}}*/

