#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include <cstring>
FILE *pArq;
FILE *temp;
char compromisso[100];
char data[10];
char hora[5];
char descricao[85];

void listar()
{//função listar
    // Abre o arquivo "agenda.txt" para leitura
    pArq = fopen("agenda.txt", "r");

    // Variáveis para controle do número do compromisso e índice na string
    int n = 1, i = 0;

    // Variável para armazenar o tamanho da linha lida do arquivo
    int tam = 0;

    // Imprime cabeçalho da tabela
    printf("#\tData\tCompromisso\tHorario\n");

    // Loop enquanto há linhas para ler no arquivo
    while (fgets(compromisso, 100, pArq) != NULL) {
        // Imprime o número do compromisso
        printf("%d ", n);

        // Obtém o tamanho real do compromisso para percorrer a linha
        tam = strlen(compromisso);

        // Loop para substituir traços por tabulações no compromisso
        for (i = 0; i < tam; i++) {
            compromisso[i] == '-' ? compromisso[i] = '\t' : compromisso[i];
        }

        // Imprime o compromisso formatado
        printf("%s", compromisso);

        // Incrementa o número do compromisso
        n++;
    }

    // Fecha o arquivo após a leitura
    fclose(pArq);

    // Imprime duas quebras de linha para melhor formatação
    printf("\n\n");
    system("pause");
    system("cls");
}

void alterar()
{//função alterar
	int id;
	int reg = 1;
	char resp;
	int  tam = 0, i = 0, j = 0, k;
	//três campos de compromissos com 100 caracteres (max) cada.
	char campos[3][100];
	listar();
	printf("Informe o id do compromisso que deseja alterar: ");
	scanf("%d",&id);
	//arquivo original para leitura e arquivo temporário para "transposição" dos dados
	pArq = fopen("agenda.txt","r");
	temp = fopen("temp.txt","w");
	while(fgets(compromisso,100,pArq) != NULL){
		//se o id do compromisso escolhido pelo usuário é igual ao registro corrente, ele acessa o compromisso
		if(reg == id){
			tam = strlen(compromisso);
			//quebra o compromisso em partes (data, descrição e hora)
			for(k=0; k < tam; k++){
					if(compromisso[k] != '-'){
						campos[i][j] = compromisso[k];
						j++;
					}else{
						campos[i][j] = '\0';
						i++;
						j=0;
					}
			}
			//confirma se o usuário quer alterar ou manter os dados do compromisso
			printf("Data: %s \nAlterar (s/n)?",campos[0]);
			scanf(" %c",&resp);
			if(resp == 's'){
				printf("Nova data (dd/mm/yyyy): ");
				fflush(stdin);
				//data
				gets(campos[0]);
			}
			
			printf("Descrição: %s \nAlterar (s/n)?",campos[1]);
			scanf(" %c",&resp);
			if(resp == 's'){
				printf("Nova descrição: ");
				fflush(stdin);
				//descrição
				gets(campos[1]);
			}
			
			printf("Hora: %s \nAlterar (s/n)?",campos[2]);
			scanf(" %c",&resp);
			if(resp == 's'){
				printf("Hora: ");
				fflush(stdin);
				//hora
				gets(campos[2]);
			}
			//salva os dados do compromisso alterado no arquivo temporário de transposição dos dados
			fprintf(temp,"%s-%s-%s\n",campos[0],campos[1],campos[2]);
		}else{
			//salva os dados de cada um dos demais compromissos no arquivo temporário de transposição dos dados
			fprintf(temp,"%s",compromisso);
		}
		reg++;				
	}
	fclose(pArq);
	fclose(temp);
	//apaga o arquivo original
	remove("agenda.txt");
	//renomeia o temporário com o nome do original
	rename("temp.txt","agenda.txt");
	printf("\n\nCompromisso alterado com sucesso!\n\n");
	system("pause");
	system("cls");	
}

void excluir()
{//função excluir
	int id;
	int reg = 1;
	char resp;
	int  tam = 0, i = 0, j = 0, k;
	char campos[3][100];
	listar();
	printf("Informe o id do compromisso que deseja excluir: ");
	scanf("%d",&id);
	pArq = fopen("agenda.txt","r");
	temp = fopen("temp.txt","w");
	while(fgets(compromisso,100,pArq) != NULL){
		//copia para o arquivo temporário de transposição apenas os compromissos diferentes do que será "excluído"
		if(reg != id){
			fprintf(temp,"%s",compromisso);
		}
		reg++;				
	}
	fclose(pArq);
	fclose(temp);
	//apaga o arquivo original
	remove("agenda.txt");
	//renomeia o temporário com o nome do original
	rename("temp.txt","agenda.txt");
	printf("\n\nCompromisso excluído com sucesso!\n\n");
	system("pause");
	system("cls");	
}

void cadastrar()
{//função cadastrar
	pArq = fopen("agenda.txt","a");

	printf("Data (dd/mm/yyyy): ");
	fflush(stdin);
	gets(data);
	printf("Descricao: ");
	gets(descricao);
	printf("Hora: ");
	scanf("%s",hora);
	fprintf(pArq,"%s-%s-%s\n",data,descricao,hora);
	fclose(pArq);
	printf("\n\nCompromisso salvo com sucesso!\n\n");	
	system("pause");
	system("cls");
}

void menu()
{//função menu
	int opcao;
	do{
		printf("Menu de opcoes\n");
		printf("1 - Listar\n");
		printf("2 - Cadastrar\n");
		printf("3 - Alterar\n");
		printf("4 - Excluir\n");
		printf("0 - Sair\n");
		printf("Opcao: ");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				system("cls");
				printf("Listagem de compromissos\n");
				listar();
				break;
			case 2:
				system("cls");
				printf("Novo compromisso\n");
				cadastrar();
				break;
			case 3:
				system("cls");
				printf("Alterar compromisso\n");
				alterar();
				break;
			case 4:
				system("cls");
				printf("Excluir compromisso\n");
				excluir();
				break;
			case 0:
				system("cls");
				printf("Saindo...\n");
				break;
			default:
				printf("Opcao invalida! Escolha uma opcao valida!\n");
		}
	}while(opcao != 0);
	
}
main(){
	setlocale(LC_ALL,"Portuguese");
	menu();
}
