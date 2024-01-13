#include<stdio.h>
#include<stdlib.h>
main(){
	printf("inclua seu ano de nascimento:\n");
	int a;
	scanf("%d", &a);
	a=2023-a;
	printf("\nsua idade e: %d", a);
	if(a<16){
		return 0;
	}
	else if(a>=16){
		printf("\npode votar");
	}
	if(a>=18) {
	printf("\npode ter habilitacao");
	}
	
}
