#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1, n2, n3, mf;
	printf("digite a primeira nota:\n");
	scanf(" %d", &n1);
	printf("digite a segunda nota:\n");
	scanf(" %d", &n2);
	printf("digite a terceira nota:\n");
	scanf(" %d", &n3);
	mf = (n1 + n2 + n3 ) / 3;
	printf("a media final e: %d\n", mf);
	system("pause");
}
	


