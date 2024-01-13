//Lista de comandos e suas respectivas funções 
#include //usado para incluir listas de oomandos e funções
<stdio.h> //biblioteca padrão de funções de entrada e saída
//scanf(), printf(), getchar(), puts(), gets()
<conio.h> //Esta biblioteca possui as rotinas de console de entrada e saída no Ms-DOS, e ainda as funções de ambiente clrscr(), gotoxy(), entre outras. 
<string.h> //Esta biblioteca possui as rotinas de tratamento de memória e strings.
<math.h> //Esta biblioteca possui as rotinas do pacote matemático.
<dos.h> //Esta biblioteca possui as rotinas de tratamento do MS-DOS e dos processadores da família Intel: x86.
//Biblioteca e comando que inclui o portugues 
#include <locale.h>
setlocale(LC_ALL,"");
setlocale(LC_ALL, “Portuguese”);
/////////////////////////Bilioteca windows////////////////////////////////////
#include <windows.h>

//_______________________________________________________________________________________//
//tipos de dados inteiros 
int de -32.768 a 32.767

long de -2.147.483.648 até 2.147.483.647

unsigned int de 0 até 65.535

//tipos de dados num reais
float de 3.4 E -38 até 3.4 E+38

double de 1.7 E -308 até 1.7 E+308
 
//Tipos de dados de caracteres
char de 0 a 255 caracteres
x[^\n]//x define o tamanho da string e [^\n] define que ao usar espaço nõa seja inválido o preenchimento de vairavel

main() //função que representa onde o programa deve começar a ser processado

%c //apenas um caractere
//caracter
%d //números inteiros decimais
//num inteiro
%e //números em notação científica
//num notação cientifica
%f //números reais (ponto flutuante)
//num reais
%g //escrita de %e ou %f no formato mais curto
//%e ou %f mais curto
%o //números octais
//octais
%s //escrita de uma série de caracteres
//serie de caracteres
%u //número decimal sem sinal
//num dec sem sinal
%x //número hexadecimal
//num hexa

//lista de funções
\n Cria uma linha nova a partir do ponto que é indicado.

\t Cria um espaço de tabulação do ponto que é indicado.

\b Executa um retrocesso de espaço do ponto que é indicado.

\” Apresenta o símbolo de aspas no ponto que é indicado.

\\ Apresenta o símbolo de barra no ponto que é indicado.

\f Adiciona um salto de página de formulário (impressora).

printf(“string de controle”, lista de argumentos); //apresenta dados no computador, o string de controle é o que irá aparecer no munitor
Scanf (“string de controle”, lista de argumentos);//usado para receber dados do usuario do programa
gets();
system(""); //da ordens ao sistema <stdlib.h>
/*
System("pause");//da uma pausa e pede para apertar qlqr tecla 
system("cls");//apaga tudo e deixa a tela sem poluição
*/
fflush(stdin)//usado para o teclado não bugar//usar depois do scanf(" %",);

//inicio
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
system("pause");	
}
control + Barra de espaço para puxar as variáveis
Para adicionar caracteres da lingua portuguesa #include<locale.h>
                                                        setlocale(LC_ALL "Portuguese");
    *Estrutura if e else*
	if(){}
	else if(){
	}
	else{
	}
//_____________________________\\  	
<validação> ? <se sim> : <se não> ;
//_____________________________\\  	
     Estrutura switch case
	 
	 switch(){
	 	case  : ; break;
	 	default : ;break;
	 } 
//_____________________________\\    
	 Estrutura for
	 for(inicia;teste;alteração){
	 	//comandos ....
	 }
//_____________________________\\	  
	 Estrutura while 
	 while(condição) {
	 	comandos....
	 } 
//_____________________________\\	    
	 Estrutura do while
	 do{
	 	comandos....
	 } while(condição);                             
   ----------------------------------------------//--------------------
   COMANDOS
   break;//encerra por completo o comando atual (case, loops...)
   
   continue;//encerra o atual comando e passa para o próximo (um dos loops de um loop)
   _______________________________________________________/_________________________________________________
   Structs 
   //definir novos tipos de dados
   
   typedef //renomear tipos de dados complexos//renomeia um indentificador
   //mesma regra para criar identificador de variaveis (não pode começar com numero, não pode ter caracteres)
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
	Funções //subprogramas
	/*Resolve porblemas grande atraves de vários problemas menores*/
	//Sintaxe
	<tipo> <nome da função> (<parametros>){
		/*bloco de comandos*/
		return <informação>;//o que a função retorna
	}
		   //Estudo de funções
	
	   
	   
	   
                                                  
                                                        


