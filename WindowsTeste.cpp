#ifndef UNICODE
#define UNICODE
#endif 
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
INT WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow ){
	printf("hInstance: %d\n", hInstance);
	printf("hPrevhInstance: %d\n", hPrevInstance);
	printf("lpCmdLine: %s\n", lpCmdLine);
	printf("nCmdShow: %d\n", nCmdShow);
 int op = MessageBoxA( NULL, "Texto Dentro", "Titulo", MB_CANCELTRYCONTINUE);
 printf("op: %d\n", op);
}
