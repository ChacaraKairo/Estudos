/*Treino de Struct*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main(){
	struct DadosCliente{
		int idade;
	    char Cpf[11];
		char nome[40];
		char e_mail[25];
		char telefone[14];
		char sexo[9];
		char estado_civil[8];
		char cep[8];
		char bairro[20];
		char rua[20];
		char cidade[20];
	};
	typedef struct DadosCliente  Dados;
	Dados Cliente;
	printf("Digite a idade\n");
	scanf(" %d", &Cliente.idade);
	printf("Digite o CPF sem pontuacoes\n");
	scanf(" %s", &Cliente.Cpf);
		printf("Digite o nome do cliente\n");
    scanf(" %40[^\n]s", &Cliente.nome);
    	printf("Digite o e-mail\n");
    scanf(" %s", &Cliente.e_mail);
    	printf("Digite o telefone (XX)XXXX-XXXX\n");
    scanf(" %s", &Cliente.telefone);
    	printf("Digite o sexo\n");
    scanf(" %s", &Cliente.sexo);
    	printf("Digite o estado civil\n");
    scanf(" %s", &Cliente.estado_civil);
    	printf("Digite o cep sem pontos\n");
    scanf(" %s", &Cliente.cep);
    	printf("Digite o bairro\n");
    scanf(" %25[^\n]s", &Cliente.bairro);
    	printf("Digite a rua\n");
    scanf(" %30[^\n]s", &Cliente.rua);
    	printf("Digite a cidade\n");
    scanf(" %20[^\n]s", &Cliente.cidade);
    printf("\n");
    printf("DADOS CADASTRAIS\n");
    printf("Nome: %s\n", Cliente.nome);
    printf("CPF: %s\n", Cliente.Cpf);
    printf("Telefone: %s\n", Cliente.telefone);
    printf("e-mail: %s\n", Cliente.e_mail);
    printf("Estado Civil: %s\n", Cliente.estado_civil);
    printf("Sexo: %s\n", Cliente.sexo);
    printf("Cep: %s\n", Cliente.cep);
    printf("Cidade: %s\n", Cliente.cidade);
    printf("Bairro: %s\n", Cliente.bairro);
    printf("Rua: %s\n", Cliente.rua);
}

