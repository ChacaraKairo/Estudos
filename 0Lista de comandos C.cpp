//Lista de comandos e suas respectivas fun��es 
#include //usado para incluir listas de oomandos e fun��es
<stdio.h> //biblioteca padr�o de fun��es de entrada e sa�da
//scanf(), printf(), getchar(), puts(), gets()
<conio.h> //Esta biblioteca possui as rotinas de console de entrada e sa�da no Ms-DOS, e ainda as fun��es de ambiente clrscr(), gotoxy(), entre outras. 
<string.h> //Esta biblioteca possui as rotinas de tratamento de mem�ria e strings.
<math.h> //Esta biblioteca possui as rotinas do pacote matem�tico.
<dos.h> //Esta biblioteca possui as rotinas de tratamento do MS-DOS e dos processadores da fam�lia Intel: x86.
//Biblioteca e comando que inclui o portugues 
#include <locale.h>
setlocale(LC_ALL,"");
setlocale(LC_ALL, �Portuguese�);
/////////////////////////Bilioteca windows////////////////////////////////////
#include <windows.h>

//_______________________________________________________________________________________//
//tipos de dados inteiros 
int de -32.768 a 32.767

long de -2.147.483.648 at� 2.147.483.647

unsigned int de 0 at� 65.535

//tipos de dados num reais
float de 3.4 E -38 at� 3.4 E+38

double de 1.7 E -308 at� 1.7 E+308
 
//Tipos de dados de caracteres
char de 0 a 255 caracteres
x[^\n]//x define o tamanho da string e [^\n] define que ao usar espa�o n�a seja inv�lido o preenchimento de vairavel

main() //fun��o que representa onde o programa deve come�ar a ser processado

%c //apenas um caractere
//caracter
%d //n�meros inteiros decimais
//num inteiro
%e //n�meros em nota��o cient�fica
//num nota��o cientifica
%f //n�meros reais (ponto flutuante)
//num reais
%g //escrita de %e ou %f no formato mais curto
//%e ou %f mais curto
%o //n�meros octais
//octais
%s //escrita de uma s�rie de caracteres
//serie de caracteres
%u //n�mero decimal sem sinal
//num dec sem sinal
%x //n�mero hexadecimal
//num hexa

//lista de fun��es
\n Cria uma linha nova a partir do ponto que � indicado.

\t Cria um espa�o de tabula��o do ponto que � indicado.

\b Executa um retrocesso de espa�o do ponto que � indicado.

\� Apresenta o s�mbolo de aspas no ponto que � indicado.

\\ Apresenta o s�mbolo de barra no ponto que � indicado.

\f Adiciona um salto de p�gina de formul�rio (impressora).

printf(�string de controle�, lista de argumentos); //apresenta dados no computador, o string de controle � o que ir� aparecer no munitor
Scanf (�string de controle�, lista de argumentos);//usado para receber dados do usuario do programa
gets();
system(""); //da ordens ao sistema <stdlib.h>
/*
System("pause");//da uma pausa e pede para apertar qlqr tecla 
system("cls");//apaga tudo e deixa a tela sem polui��o
*/
fflush(stdin)//usado para o teclado n�o bugar//usar depois do scanf(" %",);

//inicio
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
system("pause");	
}
control + Barra de espa�o para puxar as vari�veis
Para adicionar caracteres da lingua portuguesa #include<locale.h>
                                                        setlocale(LC_ALL "Portuguese");
    *Estrutura if e else*
	if(){}
	else if(){
	}
	else{
	}
//_____________________________\\  	
<valida��o> ? <se sim> : <se n�o> ;
//_____________________________\\  	
     Estrutura switch case
	 
	 switch(){
	 	case  : ; break;
	 	default : ;break;
	 } 
//_____________________________\\    
	 Estrutura for
	 for(inicia;teste;altera��o){
	 	//comandos ....
	 }
//_____________________________\\	  
	 Estrutura while 
	 while(condi��o) {
	 	comandos....
	 } 
//_____________________________\\	    
	 Estrutura do while
	 do{
	 	comandos....
	 } while(condi��o);                             
   ----------------------------------------------//--------------------
   COMANDOS
   break;//encerra por completo o comando atual (case, loops...)
   
   continue;//encerra o atual comando e passa para o pr�ximo (um dos loops de um loop)
   _______________________________________________________/_________________________________________________
   Structs 
   //definir novos tipos de dados
   
   typedef //renomear tipos de dados complexos//renomeia um indentificador
   //mesma regra para criar identificador de variaveis (n�o pode come�ar com numero, n�o pode ter caracteres)
   //para criar um novo tipo de dado declare 
   struct <novo_tipo> {
   	<tipo1><campo1>;
   	<tipo2><campo2>;
   	...
    <tipoN><campoN>;
   }
   -----
   typedef <tipo> <novo_nome>;
   <novo_nome> <nome_da_variavel>;
   -----
   struct <novo_tipo> <nome_da_variavel>;
   <novo_nome> <nome_da_variavel>;
   //precisa haver uma variavel declarda
   <nome_da_variavel>.<campo>;
   ex:
   	struct pessoa{
   		int peso;
   		float altuta;
   		char nome[10];
	   }
	   typedef struct pessoa pessoa;
	   pessoa pessoal={0;0.0;"nome"};
	   printf("peso: %d", pessoal.peso);
	   printf("altura: %g", pessoal.altuta);
	   printf("nome: %s", pessoal.nome);
	   /////////////////////////////////////
	   scanf(" %d", &pessoal.peso);
	   scanf(" %f", &pessoal.altuta);
	   scanf(" %s", &pessoal.nome);
	   ////////////////////////////////////////
	   //Misturando com vetores
	   struct pessoa{
   		int peso;
   		float altuta;
   		char nome[10];
	   }
	   typedef struct pessoa pessoa;
	   pessoa pessoal[3];
	   for(int i=0;i<3;i++){
	   	scanf(" %d", &pessoal[i].peso);
	   	fflush(stdin);
	   scanf(" %f", &pessoal[i].altuta);
	   fflush(stdin);
	   scanf(" %10[^\n]s", &pessoal[i].nome);
	   fflush(stdin);
	   }
	________________________________________________________________________//__________________________________________________________
	Fun��es //subprogramas
	/*Resolve porblemas grande atraves de v�rios problemas menores*/
	//Sintaxe
	<tipo> <nome da fun��o> (<parametros>){
		/*bloco de comandos*/
		return <informa��o>;//o que a fun��o retorna
	}
		   //Estudo de fun��es
	
	   
	   
	   
                                                  
                                                        


