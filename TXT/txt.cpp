#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include <string.h>

// Declara��o dos ponteiros de arquivo
FILE *pArq;
//Arquivo Temporario
FILE *temp;

// Declara��o de vari�veis para armazenar informa��es de compromisso
char compromisso[100];
char data[10];
char hora[5];
char descricao[85];

// Fun��o para listar compromissos
void listar() {
    // Abre o arquivo para leitura
    pArq = fopen("agenda.txt", "r");
    // r: somente para leitura; o arquivo j� deve existir no disco;
    
    //n � usado para classificar os dados do compromisso
    int n = 1, i = 0;
    //tam � usado para receber o numero de caracteres existentes no arquivo.txt
    int tam = 0;
    // Imprime cabe�alho
    printf("#\tData\tCompromisso\tHorario\n");
    // L� os compromissos do arquivo e os exibe
    while (fgets(compromisso, 100, pArq) != NULL) {
    	//imprime a coloca��o do compromisso na lista
        printf("%d ", n);
        //a fun��o strlen conta quantos caracteres existem antes do caracter nulo \0
        tam = strlen(compromisso);
        for (i = 0; i < tam; i++) {
        	 // Substitui tra�os por tabula��es no compromisso
            compromisso[i] == '-' ? compromisso[i] = '\t' : compromisso[i];
        }
        //imprime o compromisso
        printf("%s", compromisso);
        n++;
    }
    printf("\n");
    system("pause");
    system("cls");
    // Fecha o arquivo
    fclose(pArq);
    printf("\n\n");
}

// Fun��o para alterar compromissos
void alterar() {
    int id; //id do compromisso
    int reg = 1; //usado para rodar o while at� encontrar o valor do id
    char resp; //usado para ver se o usuario quer ou nao alterar o dado pedido
    int tam = 0, i = 0, j = 0, k; //tam recebe o tamanho da string de cada compromisso
    //i usado no for para receber cada parte do compromisso
    //j usado para receber os caracteres de cada parte do compromisso
    //k recebe o valor da string sendo usado dentro do vertor compromisso
    char campos[3][100]; //usado para separar o compromisso em partes 
    listar(); //puxa a fun��o listar para mostrar os compromissos
    // Solicita o id do compromisso a ser alterado
    printf("Informe o id do compromisso que deseja alterar: ");
    scanf("%d", &id);//�pede o id
    // Abre o arquivo original para leitura e um arquivo tempor�rio para "transposi��o" dos dados usando a fun��o fopen
    pArq = fopen("agenda.txt", "r");// r: somente para leitura; o arquivo j� deve existir no disco;
    temp = fopen("temp.txt", "w");// w: escrita; cria ou substitui o arquivo que ser� escrito; cuidado: se o arquivo j� existia ser� sobrescrito!!!
    // L� os compromissos do arquivo original e os escreve no arquivo tempor�rio, realizando altera��es conforme necess�rio
    //fgets� utilizada para leitura de strings em um arquivo at� o final da linha quando encontra o caractere \n
    while (fgets(compromisso, 100, pArq) != NULL) 
    //roda enquanto n�o for retornado NULL
	{
		//faz a compara��o do id com o valor atual de reg
        if (reg == id) 
		{
			//tam recebe o tamanho da string compromisso 
            tam = strlen(compromisso);
            // Quebra o compromisso em partes (data, descri��o e hora)
            for (k = 0; k < tam; k++) 
			{
                if (compromisso[k] != '-') 
				{
					//enquanto n�o chegar no "-" ele continua gravando um vetor 
                    campos[i][j] = compromisso[k];
                    j++;
                } 
				else 
				{
					//quando a leitura chegar em um "-" troca por \0 na matriz
                    campos[i][j] = '\0';
                    i++;
                    j = 0;
                }
            }
            // Confirma se o usu�rio quer alterar ou manter os dados do compromisso
            printf("Data: %s \nAlterar (s/n)?", campos[0]);
            scanf(" %c", &resp);
            if (resp == 's') 
			{
				 //pergunta se ser� alterado
                printf("Nova data (dd/mm/yyyy): ");
                //apaga o buffer de caracter
                fflush(stdin);
                // Atualiza a data
                gets(campos[0]);
            }
             //pergunta se ser� alterado
            printf("Descri��o: %s \nAlterar (s/n)?", campos[1]);
            scanf(" %c", &resp);
            if (resp == 's') {
                printf("Nova descri��o: ");
                //apaga o buffer de caracte
                fflush(stdin);
                // Atualiza a descri��o
                gets(campos[1]);
            }
                //pergunta se ser� alterado
            printf("Hora: %s \nAlterar (s/n)?", campos[2]);
            scanf(" %c", &resp);
            if (resp == 's') {
                printf("Nova hora: ");
                //apaga o buffer de caracte
                fflush(stdin);
                // Atualiza a hora
                gets(campos[2]);
            }
            // Salva os dados do compromisso alterado no arquivo tempor�rio de transposi��o dos dados
            fprintf(temp, "%s-%s-%s\n", campos[0], campos[1], campos[2]);
        } 
		else 
		{
            // Salva os dados de cada um dos demais compromissos no arquivo tempor�rio de transposi��o dos dados
            fprintf(temp, "%s", compromisso);
        }
        //incrementa a variavel reg
        reg++;
    }
    system("pause");
    system("cls");
    // Fecha os arquivos
    fclose(pArq);
    fclose(temp);
    // Apaga o arquivo original usando remove
    remove("agenda.txt");
    // Renomeia o tempor�rio com o nome do original usando rename
    rename("temp.txt", "agenda.txt");
    // Confirma��o do processo
    printf("\n\nCompromisso alterado com sucesso!\n\n");
}

// Fun��o para excluir compromissos
void excluir() {
    int id;
    int reg = 1;
    char resp;
    int tam = 0, i = 0, j = 0, k;
    char campos[3][100];
    listar();
    // Solicita o id do compromisso a ser exclu�do
    printf("Informe o id do compromisso que deseja excluir: ");
    scanf("%d", &id);
    // Abre o arquivo original para leitura e um arquivo tempor�rio para "transposi��o" dos dados
    pArq = fopen("agenda.txt", "r");
    temp = fopen("temp.txt", "w");
    // L� os compromissos do arquivo original e escreve no arquivo tempor�rio apenas os compromissos diferentes do que ser� exclu�do
    while (fgets(compromisso, 100, pArq) != NULL) {
        if (reg != id) {
            fprintf(temp, "%s", compromisso);
        }
        reg++;
    }
    system("pause");
    system("cls");
    // Fecha os arquivos
    fclose(pArq);
    fclose(temp);
    // Apaga o arquivo original
    remove("agenda.txt");
    // Renomeia o tempor�rio com o nome do original
    rename("temp.txt", "agenda.txt");
    printf("\n\nCompromisso exclu�do com sucesso!\n\n");
}

// Fun��o para cadastrar novo compromisso
void cadastrar() {
    // Abre o arquivo para escrita no final
    pArq = fopen("agenda.txt", "a");

    // Solicita informa��es do compromisso ao usu�rio
    printf("Data (dd/mm/yyyy): ");
    fflush(stdin);
    gets(data);
    printf("Descricao: ");
    gets(descricao);
    printf("Hora: ");
    scanf("%s", hora);

    // Escreve as informa��es do compromisso no arquivo
    fprintf(pArq, "%s-%s-%s\n", data, descricao, hora);

    // Fecha o arquivo
    fclose(pArq);
    printf("\n\nCompromisso salvo com sucesso!\n\n");
    system("pause");
    system("cls");
}

// Fun��o para exibir o menu
void menu() {
	
    int opcao;
    do {
        // Exibe o menu de op��es
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
				   system("cls");
				printf("Opcao invalida! Escolha uma opcao valida!\n");
 
		}
	}while(opcao != 0);
}
main(){
	setlocale(LC_ALL,"Portuguese");
	menu();	
}
