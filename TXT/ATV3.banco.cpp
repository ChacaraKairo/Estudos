#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

FILE*Cliente;
FILE*Colaborador;
FILE*TCliente;

char Nome[50];
int Agencia = 0001;
int Conta;
int Senha;

void Entrada(){
	int campo;
	do{
		printf("Escolha o Campo\n");
	printf("[1]Campo Colaborador Banco XUXU\n");
	printf("[2]Campo Cliente Banco XUXU\n");
	scanf(" %d", &campo);
	switch(campo){
		case 1: system("cls");
		//Login_Colaborador();
		break;
		case 2: system("cls");
		//Login_Cliente();
		break;
		default: system("cls");
		printf("Opção Inválida");break;
	}
	}while(campo!=1&&campo!=2);
	
}
int main(){
	Entrada();
}
