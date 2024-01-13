#include<stdio.h>
#include<stdlib.h>
/*main(){
	printf("insira um numero inteiro: ");
	int num;
	scanf(" %d", &num);
	int a = 0;
	do {
		num = num * a;
		a = a + 1;
	}while(a <= 10);
	printf(" %d, %d", num, a);

}*/
main(){
	printf("numero inteiro");
	int num;
	scanf(" %d", &num);
	int a = 0;
	for(a ;a<=10;a++);
	{
   num = num * a;
	printf("%d ", num);
	}
	
}
