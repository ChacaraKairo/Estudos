#include<stdio.h>
main(){
	printf("Responda com S para Sim e N para Nao.\n");
	int resp = 0;
	char sn;
	printf("Voce telefonou apra a vitima?\n");
	scanf(" %c",&sn);
	if(sn == 'S' || sn == 's'){
		resp++;
	}
	printf("Esteve no local do crime?\n");
	scanf(" %c",&sn);
	if(sn == 'S' || sn == 's'){
		resp++;
	}
	printf("Mora perto da vitima?\n");
	scanf(" %c",&sn);
	if(sn == 'S' || sn == 's'){
		resp++;
	}
	printf("Devia para a vitima?\n");
	scanf(" %c",&sn);
	if(sn == 'S' || sn == 's'){
		resp++;
	}
	printf("Ja trabahlou com a vitma?\n");
	scanf(" %c",&sn);
	if(sn == 'S' || sn == 's'){
		resp++;
	}
	switch(resp){
		case 2 : printf("Suspeito\n");break;
		case 3 ... 4 : printf("Cumplice\n");break;
		case 5 : printf("Assassino\n");break;
		default: printf("Livre\n");break;
	}
	return 0;
}
