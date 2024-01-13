#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
printf("digite 3 numeros inteiros\n");
int a, b, c;
scanf(" %d %d %d", &a, &b ,&c);
int d;
if(b<a&&a<c){
	d=b;
	b=a;
	a=d;
}if(a<c&&c<b){
	d=c;
	c=b;
	b=d;
}if(c<a&&a<b){
	//a=20 b=30 c=10
	d=c;
	c=b;
	b=a;
	a=d;	
}if(c<b&&b<a){
	d=a;
	a=c;
	c=d;
}
if(b<c&&c<a){
	// a=30 b=10 c=20
	d=b;
	b=c;
	c=a;
	a=d;
}
printf(" %d, %d, %d\n", a, b, c);

system("pause");	
}
