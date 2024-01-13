//Bibliotecas
#include<stdio.h>
//Leitura de Dados (Input):
scanf();// L� dados formatados da entrada padr�o (geralmente o teclado) e atribui-os a vari�veis.
getchar();// L� um caractere da entrada padr�o.
gets();// L� uma linha de texto da entrada padr�o.
//Escrita de Dados (Output):
printf();// Formata e exibe dados na sa�da padr�o (geralmente o console).
putchar();// Escreve um caractere na sa�da padr�o.
puts();// Escreve uma string na sa�da padr�o, seguida por uma nova linha.
//Manipula��o de Arquivos:
fopen();// Abre um arquivo para leitura ou escrita.
fclose();// Fecha um arquivo aberto.
fread(); e fwrite();// Leem e escrevem dados bin�rios em arquivos.
fgets(); e fputs();// Leem e escrevem linhas de texto em arquivos.
//Manipula��o de Posi��o em Arquivos:
fseek();// Move a posi��o de leitura/escrita em um arquivo.
ftell();// Retorna a posi��o atual em um arquivo.
//Manipula��o de Caractere Especial:
feof();// Verifica o fim do arquivo.
ferror();// Verifica erros em opera��es de arquivo.
//Manipula��o de Buffering:
setbuf(); e setvbuf();// Controlam o buffering de entrada/sa�da.
//Opera��es de Impress�o e Formata��o:
/*Fun��es para formata��o de sa�da, como */sprintf(); e snprintf(); //que permitem criar strings formatadas.
//Manipula��o de Diret�rios:
remove();// Remove um arquivo.
rename();// Renomeia um arquivo.
#include<conio.h> e #include<conio.c.h> 
clrscr();// Esta fun��o � usada para limpar a tela do console, removendo o conte�do anteriormente exibido.
gotoxy(x, y);// Ela permite posicionar o cursor de texto na tela nas coordenadas especificadas (x, y).
/*variavel*/ = getch();// Essa fun��o l� um caractere do teclado, sem a necessidade de pressionar a tecla Enter. � frequentemente usada para receber entrada de um usu�rio sem a necessidade de confirmar com Enter.
kbhit();// Esta fun��o verifica se uma tecla foi pressionada, sem bloquear a execu��o do programa. Pode ser usada para verificar a entrada de teclado sem interromper o fluxo do programa.
cprintf(format, ...);// Similar � fun��o printf(), ela permite a formata��o e exibi��o de texto na tela do console.
#include<stdlib.h>
/*Aloca��o de Mem�ria: A stdlib geralmente inclui fun��es como*/ malloc (C e C++) e new (C++) //para alocar dinamicamente mem�ria durante a execu��o do programa.
/*Convers�o de Tipos: Ela oferece fun��es para converter entre diferentes tipos de dados, como */atoi (C e C++) //para converter uma string em um inteiro.
/*Gera��o de N�meros Aleat�rios: A stdlib inclui fun��es para gerar n�meros pseudoaleat�rios, como */rand (C e C++).
/*Controle de Processo: Em sistemas operacionais Unix-like, a stdlib oferece fun��es como */system (C e C++) ex: system(pause);//para executar comandos do sistema a partir do programa.
/*Gest�o de Ambiente: Fun��es como */getenv (C e C++) //permitem acessar vari�veis de ambiente do sistema.
/*Ordena��o e Pesquisa: A stdlib oferece fun��es para ordenar e pesquisar elementos em arrays, como */qsort (C e C++) e bsearch (C e C++).
/*Controle de Fluxo: Em C e C++, stdlib inclui fun��es como */exit //para encerrar a execu��o do programa com um c�digo de sa�da especificado.
/*Gerenciamento de Strings: Fun��es como */strlen, strcpy, strcat (C e C++) //para manipula��o de strings.
/*Gest�o de Processos: A stdlib oferece fun��es para criar e manipular processos, como*/ fork (C e C++).
/*Manipula��o de Arquivos: Ela inclui fun��es para abrir, ler, gravar e fechar arquivos, como */fopen, fread, fwrite, fclose (C e C++).
/*Matem�tica: A biblioteca stdlib tamb�m cont�m fun��es matem�ticas padr�o, como */abs, sqrt, sin, cos (C e C++).
/*Gerenciamento de Tempo: Ela oferece fun��es para trabalhar com datas e horas, como */time, localtime, strftime (C e C++)
#include<string.h>
strlen(s);// Retorna o comprimento da string s (n�mero de caracteres).
strcpy(dest, src);// Copia o conte�do da string src para a string dest.
strncpy(dest, src, n);// Copia at� os primeiros n caracteres da string src para a string dest.
strcat(dest, src);// Concatena (anexa) a string src � string dest.
strncat(dest, src, n);// Concatena at� os primeiros n caracteres da string src � string dest.
strcmp(str1, str2);// Compara as strings str1 e str2 e retorna um valor inteiro que indica a rela��o entre elas (0 se forem iguais).
strncmp(str1, str2, n);// Compara at� os primeiros n caracteres das strings str1 e str2.
strchr(s, c);// Retorna um ponteiro para a primeira ocorr�ncia do caractere c na string s.
strrchr(s, c);// Retorna um ponteiro para a �ltima ocorr�ncia do caractere c na string s.
strstr(s1, s2);// Retorna um ponteiro para a primeira ocorr�ncia da string s2 dentro da string s1.
strtok(s, delimiters);// Divide a string s em "tokens" com base nos caracteres especificados em delimiters.
strcpy_s(dest, destSize, src);/*Uma vers�o segura da fun��o */strcpy(), //que leva em considera��o o tamanho do buffer de destino para evitar estouro de buffer.
strncpy_s(dest, destSize, src, n);/* Uma vers�o segura da fun��o */strncpy().
strcat_s(dest, destSize, src);/* Uma vers�o segura da fun��o*/strcat().
strncat_s(dest, destSize, src, n);/* Uma vers�o segura da fun��o*/strncat()
#include<math.h>
//Fun��es Trigonom�tricas:
sin(x);// Calcula o seno de um �ngulo em radianos.
cos(x);// Calcula o cosseno de um �ngulo em radianos.
tan(x);//Calcula a tangente de um �ngulo em radianos.
asin(x);// Calcula o arco seno (inverso do seno) de um valor.
acos(x);// Calcula o arco cosseno (inverso do cosseno) de um valor.
atan(x);// Calcula o arco tangente (inverso da tangente) de um valor.
atan2(y, x);// Calcula o arco tangente do quociente y / x, fornecendo informa��es sobre o quadrante do �ngulo resultante.
//Fun��es Exponenciais e Logar�tmicas:
exp(x);// Calcula a fun��o exponencial, e^x.
log(x);// Calcula o logaritmo natural (base e) de um valor.
log10(x);// Calcula o logaritmo na base 10 de um valor.
pow(x, y);// Calcula x elevado � pot�ncia y.
//Fun��es de Raiz Quadrada:
sqrt(x);// Calcula a raiz quadrada de um valor.
//Fun��es de Arredondamento:
ceil(x);// Arredonda um valor para cima para o inteiro mais pr�ximo.
floor(x);// Arredonda um valor para baixo para o inteiro mais pr�ximo.
round(x);// Arredonda um valor para o inteiro mais pr�ximo.
//Fun��es de Valor Absoluto e Sinal:
fabs(x);// Retorna o valor absoluto de um n�mero real.
copysign(x, y);// Retorna x com o sinal de y.
//Constantes Matem�ticas:
M_PI: //Valor de p (pi).
M_E: //Valor de e (n�mero de Euler).
//Fun��es de Convers�o Angular:
deg2rad(x);// Converte graus em radianos.
rad2deg(x);// Converte radianos em graus.
#include<time.h>
time_t time(time_t *t);// Esta fun��o retorna o tempo atual em segundos desde a "�poca Unix" (1� de janeiro de 1970, 00:00:00 UTC). O tempo atual � armazenado em t se for fornecido.
struct tm *localtime(const time_t *timeptr);// Esta fun��o converte um valor de tempo (geralmente obtido com a fun��o time) em uma estrutura tm representando a hora local (data e hora separadas).
struct tm *gmtime(const time_t *timeptr);// Similar ao localtime, mas retorna a hora no Tempo Universal Coordenado (UTC).
time_t mktime(struct tm *timeptr);// Converte uma estrutura tm preenchida em um valor de tempo (time_t).
char *asctime(const struct tm *timeptr);// Converte uma estrutura tm em uma representa��o de data/hora leg�vel por humanos em uma string.
char *ctime(const time_t *timeptr);// Converte um valor de tempo (time_t) em uma representa��o de data/hora leg�vel por humanos em uma string.
size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr);// Permite a formata��o personalizada de uma estrutura tm em uma string, usando um formato especificado.
clock_t clock(void);// Retorna o tempo de CPU consumido pelo programa desde o seu in�cio. � �til para medir o tempo de execu��o de um programa.
double difftime(time_t time1, time_t time0);// Calcula a diferen�a de tempo (em segundos) entre time1 e time0.
void sleep(unsigned int seconds);// Pausa a execu��o do programa por um n�mero especificado de segundos.
int nanosleep(const struct timespec *req, struct timespec *rem);// Pausa a execu��o do programa por um per�odo especificado com precis�o de nanossegundos.
struct timespec;// Esta estrutura � usada para representar um per�odo de tempo com precis�o de nanossegundos. Ela � usada em fun��es como nanosleep
#include<ctype.h>
int isalnum(int c);// Verifica se o caractere c � uma letra ou um d�gito (alfanum�rico).
int isalpha(int c);// Verifica se o caractere c � uma letra.
int isdigit(int c);// Verifica se o caractere c � um d�gito.
int islower(int c);// Verifica se o caractere c � uma letra min�scula.
int isupper(int c);// Verifica se o caractere c � uma letra mai�scula.
int isspace(int c);// Verifica se o caractere c � um espa�o em branco, como espa�o, tabula��o, nova linha, retorno de carro, etc.
int tolower(int c);// Converte o caractere c em min�scula, se for uma letra mai�scula; caso contr�rio, retorna o mesmo caractere.
int toupper(int c);// Converte o caractere c em mai�scula, se for uma letra min�scula; caso contr�rio, retorna o mesmo caractere.
int isprint(int c);// Verifica se o caractere c � um caractere imprim�vel (aqueles que podem ser exibidos na tela).
int iscntrl(int c);// Verifica se o caractere c � um caractere de controle (n�o imprim�vel).
int ispunct(int c);// Verifica se o caractere c � um caractere de pontua��o (nem letra, nem d�gito, nem espa�o).
int isxdigit(int c);// Verifica se o caractere c � um d�gito hexadecimal (0-9, A-F, a-f).
#include<stdbool.h>
//__________________________________________________________________________________________________________________________________________________
//Tipos de Vari�veis e sesu indicadores
//Inteiros
int %d e %i e %u(sem sinal);
short int %hd e %hu(inteiros sem sinal);
long int %ld e %lu(sem sinal);
long long int %lld e %llu(sem sinal);
//Decimais ou Ponto Flutuante
float %f e %g(reduz o nmr de casas decimais);
double %lf ;
long double %llf;
//Caracteres
char %c;
char x[x] %s;//(string de caracteres)
//Bololeanos
 bool isTrue = true;
 bool isFalse = false;
//Endere�os de Mem�ria
int*
char*
double*
//Tipo void
void //indica ausencia de tipo
//__________________________________________________________________________________________________________________________________________________
//Estruturas Encadeadas
//if
if(/*teste l�gico*/){
	//bloco de c�digos
}
//if else___________________________________
if(/*teste l�gico*/){
	//bloco de c�digos(verdade)
}else{
	//bloco de c�digos(falso)
}
//if else if________________________________
if(/*teste l�gico*/){
	//bloco de c�digos(verdade)
}else if(/*teste l�gico*/){
	//bloco de c�digos
}
//if else if else___________________________
if(/*teste l�gico*/){
	//bloco de c�digos(verdade)
}else if(/*teste l�gico*/){
	//bloco de c�digos
}else{
	//bloco de c�digos
}
//_________________________________________________________________________________________________________________________________
//Multipla escolha
//switch case
switch(/*variavel*/){
	case /*1�op��o da variavel*/ : /*bloco de c�digo*/;
	break;
	case /*2�op��o da variavel*/ : /*bloco de c�digo*/;
	break;
	case /*n�op��o da variavel*/ : /*bloco de c�digo*/;
	break;
	default: /*bloco de c�digo*/;
	break;
}
//___________________________________________________________________________________________________________________________________
//Operador Tern�rio
//Semelhante a fun��o SE() do EXCEL
/*sintaxe*/ ? /*blocode c�digo se verdadeiro*/ : /*bloco de c�digo se falso*/ ;
//____________________________________________________________________________________________________________________________________
//Estruturas de repeti��o
//while
while(/*teste l�gico de parada*/){
	//bloco de c�digo a ser repetido
	/*vari�vel int*/++
}
//do while
do{
	//bloco de c�digo
	/*vari�vel int*/++
}while(/*teste l�gico de parada*/);
//for
for(/*vari�vel*/;/*teste l�gico de parada*/;/*incremento/decremento*/){
	//bloco de c�digo
}
//____________________________________________________________________________________________________________________________________





*
