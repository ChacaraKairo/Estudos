#include<stdio.h>
main(){
	float media=0; 
	int quantia=0, idade;
	char sn;
	do{
		printf("Qual a sua idade?\n");
		scanf(" %d", &idade);
		quantia++;
		media=media+idade;
		printf("Deseja cadastar uma nova idade?\n S para Sim e N para Nao\n");
		scanf(" %c", &sn);
	}while(sn=='s' || sn== 'S');
	media = media / quantia;
	printf(" A media e: %g\n", media);
	if(media>=0 && media<26){
		printf("jovem");
	}else if(media>60){
		printf("idoso");
	}else {
		printf("Adulto");
	}
	return 0;
}
