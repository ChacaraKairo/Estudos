#include<stdio.h>
main(){
	int b = 0;
	for(int a = 0; a<=50; a++){	
		if(a%2==0){
			b = a + b;
		}
	}
	printf(" %d", b);
	return 0;
}
