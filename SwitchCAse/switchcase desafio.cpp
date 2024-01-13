#include<stdio.h>
#include<stdlib.h>

main()
{
	printf("qual o salario?\nR$");
	float salario;
	scanf(" %f", &salario);
	/*int INSS;
		if(salario<=1302){
		INSS=1;}
		else if(salario>1302 && salario<=2571.29){
		INSS=2;}
		else if(salario>2571.29 && salario<=3856.94){
		INSS=3;}
		else if(salario>3856.94 && salario<=7507.29){
		INSS=4;}		
	switch(INSS){
		case 1: salario = salario * 0.075; break;
		case 2: salario = ((salario-1302)*0.09)+97.65; break;
		case 3: salario = ((salario-2571.29)*0.12)+211.88;break;
		case 4: salario = ((salario-3856.94)*0.14)+366.16;break;
		default : salario = 877.24; break;
	}*/
	(salario<=1302) ? salario = salario * 0.075 : (salario>1302 && salario<=2571.29) ? ((salario-1302)*0.09)+97.65 :
	 (salario>2571.29 && salario<=3856.94) ? ((salario-2571.29)*0.12)+211.88 : 
	 (salario>3856.94 && salario<=7507.29) ? ((salario-3856.94)*0.14)+366.16 : (salario = 877.24);
printf("o valor do INSS e:\nR$ %.2f", salario);
return 0;
}
