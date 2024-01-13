//Bibliotecas
#include<stdio.h>
//Leitura de Dados (Input):
scanf();// Lê dados formatados da entrada padrão (geralmente o teclado) e atribui-os a variáveis.
getchar();// Lê um caractere da entrada padrão.
gets();// Lê uma linha de texto da entrada padrão.
//Escrita de Dados (Output):
printf();// Formata e exibe dados na saída padrão (geralmente o console).
putchar();// Escreve um caractere na saída padrão.
puts();// Escreve uma string na saída padrão, seguida por uma nova linha.
//Manipulação de Arquivos:
fopen();// Abre um arquivo para leitura ou escrita.
fclose();// Fecha um arquivo aberto.
fread(); e fwrite();// Leem e escrevem dados binários em arquivos.
fgets(); e fputs();// Leem e escrevem linhas de texto em arquivos.
//Manipulação de Posição em Arquivos:
fseek();// Move a posição de leitura/escrita em um arquivo.
ftell();// Retorna a posição atual em um arquivo.
//Manipulação de Caractere Especial:
feof();// Verifica o fim do arquivo.
ferror();// Verifica erros em operações de arquivo.
//Manipulação de Buffering:
setbuf(); e setvbuf();// Controlam o buffering de entrada/saída.
//Operações de Impressão e Formatação:
/*Funções para formatação de saída, como */sprintf(); e snprintf(); //que permitem criar strings formatadas.
//Manipulação de Diretórios:
remove();// Remove um arquivo.
rename();// Renomeia um arquivo.
#include<conio.h> e #include<conio.c.h> 
clrscr();// Esta função é usada para limpar a tela do console, removendo o conteúdo anteriormente exibido.
gotoxy(x, y);// Ela permite posicionar o cursor de texto na tela nas coordenadas especificadas (x, y).
/*variavel*/ = getch();// Essa função lê um caractere do teclado, sem a necessidade de pressionar a tecla Enter. É frequentemente usada para receber entrada de um usuário sem a necessidade de confirmar com Enter.
kbhit();// Esta função verifica se uma tecla foi pressionada, sem bloquear a execução do programa. Pode ser usada para verificar a entrada de teclado sem interromper o fluxo do programa.
cprintf(format, ...);// Similar à função printf(), ela permite a formatação e exibição de texto na tela do console.
#include<stdlib.h>
/*Alocação de Memória: A stdlib geralmente inclui funções como*/ malloc (C e C++) e new (C++) //para alocar dinamicamente memória durante a execução do programa.
/*Conversão de Tipos: Ela oferece funções para converter entre diferentes tipos de dados, como */atoi (C e C++) //para converter uma string em um inteiro.
/*Geração de Números Aleatórios: A stdlib inclui funções para gerar números pseudoaleatórios, como */rand (C e C++).
/*Controle de Processo: Em sistemas operacionais Unix-like, a stdlib oferece funções como */system (C e C++) ex: system(pause);//para executar comandos do sistema a partir do programa.
/*Gestão de Ambiente: Funções como */getenv (C e C++) //permitem acessar variáveis de ambiente do sistema.
/*Ordenação e Pesquisa: A stdlib oferece funções para ordenar e pesquisar elementos em arrays, como */qsort (C e C++) e bsearch (C e C++).
/*Controle de Fluxo: Em C e C++, stdlib inclui funções como */exit //para encerrar a execução do programa com um código de saída especificado.
/*Gerenciamento de Strings: Funções como */strlen, strcpy, strcat (C e C++) //para manipulação de strings.
/*Gestão de Processos: A stdlib oferece funções para criar e manipular processos, como*/ fork (C e C++).
/*Manipulação de Arquivos: Ela inclui funções para abrir, ler, gravar e fechar arquivos, como */fopen, fread, fwrite, fclose (C e C++).
/*Matemática: A biblioteca stdlib também contém funções matemáticas padrão, como */abs, sqrt, sin, cos (C e C++).
/*Gerenciamento de Tempo: Ela oferece funções para trabalhar com datas e horas, como */time, localtime, strftime (C e C++)
#include<string.h>
strlen(s);// Retorna o comprimento da string s (número de caracteres).
strcpy(dest, src);// Copia o conteúdo da string src para a string dest.
strncpy(dest, src, n);// Copia até os primeiros n caracteres da string src para a string dest.
strcat(dest, src);// Concatena (anexa) a string src à string dest.
strncat(dest, src, n);// Concatena até os primeiros n caracteres da string src à string dest.
strcmp(str1, str2);// Compara as strings str1 e str2 e retorna um valor inteiro que indica a relação entre elas (0 se forem iguais).
strncmp(str1, str2, n);// Compara até os primeiros n caracteres das strings str1 e str2.
strchr(s, c);// Retorna um ponteiro para a primeira ocorrência do caractere c na string s.
strrchr(s, c);// Retorna um ponteiro para a última ocorrência do caractere c na string s.
strstr(s1, s2);// Retorna um ponteiro para a primeira ocorrência da string s2 dentro da string s1.
strtok(s, delimiters);// Divide a string s em "tokens" com base nos caracteres especificados em delimiters.
strcpy_s(dest, destSize, src);/*Uma versão segura da função */strcpy(), //que leva em consideração o tamanho do buffer de destino para evitar estouro de buffer.
strncpy_s(dest, destSize, src, n);/* Uma versão segura da função */strncpy().
strcat_s(dest, destSize, src);/* Uma versão segura da função*/strcat().
strncat_s(dest, destSize, src, n);/* Uma versão segura da função*/strncat()
#include<math.h>
//Funções Trigonométricas:
sin(x);// Calcula o seno de um ângulo em radianos.
cos(x);// Calcula o cosseno de um ângulo em radianos.
tan(x);//Calcula a tangente de um ângulo em radianos.
asin(x);// Calcula o arco seno (inverso do seno) de um valor.
acos(x);// Calcula o arco cosseno (inverso do cosseno) de um valor.
atan(x);// Calcula o arco tangente (inverso da tangente) de um valor.
atan2(y, x);// Calcula o arco tangente do quociente y / x, fornecendo informações sobre o quadrante do ângulo resultante.
//Funções Exponenciais e Logarítmicas:
exp(x);// Calcula a função exponencial, e^x.
log(x);// Calcula o logaritmo natural (base e) de um valor.
log10(x);// Calcula o logaritmo na base 10 de um valor.
pow(x, y);// Calcula x elevado à potência y.
//Funções de Raiz Quadrada:
sqrt(x);// Calcula a raiz quadrada de um valor.
//Funções de Arredondamento:
ceil(x);// Arredonda um valor para cima para o inteiro mais próximo.
floor(x);// Arredonda um valor para baixo para o inteiro mais próximo.
round(x);// Arredonda um valor para o inteiro mais próximo.
//Funções de Valor Absoluto e Sinal:
fabs(x);// Retorna o valor absoluto de um número real.
copysign(x, y);// Retorna x com o sinal de y.
//Constantes Matemáticas:
M_PI: //Valor de p (pi).
M_E: //Valor de e (número de Euler).
//Funções de Conversão Angular:
deg2rad(x);// Converte graus em radianos.
rad2deg(x);// Converte radianos em graus.
#include<time.h>
time_t time(time_t *t);// Esta função retorna o tempo atual em segundos desde a "Época Unix" (1º de janeiro de 1970, 00:00:00 UTC). O tempo atual é armazenado em t se for fornecido.
struct tm *localtime(const time_t *timeptr);// Esta função converte um valor de tempo (geralmente obtido com a função time) em uma estrutura tm representando a hora local (data e hora separadas).
struct tm *gmtime(const time_t *timeptr);// Similar ao localtime, mas retorna a hora no Tempo Universal Coordenado (UTC).
time_t mktime(struct tm *timeptr);// Converte uma estrutura tm preenchida em um valor de tempo (time_t).
char *asctime(const struct tm *timeptr);// Converte uma estrutura tm em uma representação de data/hora legível por humanos em uma string.
char *ctime(const time_t *timeptr);// Converte um valor de tempo (time_t) em uma representação de data/hora legível por humanos em uma string.
size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr);// Permite a formatação personalizada de uma estrutura tm em uma string, usando um formato especificado.
clock_t clock(void);// Retorna o tempo de CPU consumido pelo programa desde o seu início. É útil para medir o tempo de execução de um programa.
double difftime(time_t time1, time_t time0);// Calcula a diferença de tempo (em segundos) entre time1 e time0.
void sleep(unsigned int seconds);// Pausa a execução do programa por um número especificado de segundos.
int nanosleep(const struct timespec *req, struct timespec *rem);// Pausa a execução do programa por um período especificado com precisão de nanossegundos.
struct timespec;// Esta estrutura é usada para representar um período de tempo com precisão de nanossegundos. Ela é usada em funções como nanosleep
#include<ctype.h>
int isalnum(int c);// Verifica se o caractere c é uma letra ou um dígito (alfanumérico).
int isalpha(int c);// Verifica se o caractere c é uma letra.
int isdigit(int c);// Verifica se o caractere c é um dígito.
int islower(int c);// Verifica se o caractere c é uma letra minúscula.
int isupper(int c);// Verifica se o caractere c é uma letra maiúscula.
int isspace(int c);// Verifica se o caractere c é um espaço em branco, como espaço, tabulação, nova linha, retorno de carro, etc.
int tolower(int c);// Converte o caractere c em minúscula, se for uma letra maiúscula; caso contrário, retorna o mesmo caractere.
int toupper(int c);// Converte o caractere c em maiúscula, se for uma letra minúscula; caso contrário, retorna o mesmo caractere.
int isprint(int c);// Verifica se o caractere c é um caractere imprimível (aqueles que podem ser exibidos na tela).
int iscntrl(int c);// Verifica se o caractere c é um caractere de controle (não imprimível).
int ispunct(int c);// Verifica se o caractere c é um caractere de pontuação (nem letra, nem dígito, nem espaço).
int isxdigit(int c);// Verifica se o caractere c é um dígito hexadecimal (0-9, A-F, a-f).
#include<stdbool.h>
//__________________________________________________________________________________________________________________________________________________
//Tipos de Variáveis e sesu indicadores
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
//Endereços de Memória
int*
char*
double*
//Tipo void
void //indica ausencia de tipo
//__________________________________________________________________________________________________________________________________________________
//Estruturas Encadeadas
//if
if(/*teste lógico*/){
	//bloco de códigos
}
//if else___________________________________
if(/*teste lógico*/){
	//bloco de códigos(verdade)
}else{
	//bloco de códigos(falso)
}
//if else if________________________________
if(/*teste lógico*/){
	//bloco de códigos(verdade)
}else if(/*teste lógico*/){
	//bloco de códigos
}
//if else if else___________________________
if(/*teste lógico*/){
	//bloco de códigos(verdade)
}else if(/*teste lógico*/){
	//bloco de códigos
}else{
	//bloco de códigos
}
//_________________________________________________________________________________________________________________________________
//Multipla escolha
//switch case
switch(/*variavel*/){
	case /*1ªopção da variavel*/ : /*bloco de código*/;
	break;
	case /*2ªopção da variavel*/ : /*bloco de código*/;
	break;
	case /*nªopção da variavel*/ : /*bloco de código*/;
	break;
	default: /*bloco de código*/;
	break;
}
//___________________________________________________________________________________________________________________________________
//Operador Ternário
//Semelhante a função SE() do EXCEL
/*sintaxe*/ ? /*blocode código se verdadeiro*/ : /*bloco de código se falso*/ ;
//____________________________________________________________________________________________________________________________________
//Estruturas de repetição
//while
while(/*teste lógico de parada*/){
	//bloco de código a ser repetido
	/*variável int*/++
}
//do while
do{
	//bloco de código
	/*variável int*/++
}while(/*teste lógico de parada*/);
//for
for(/*variável*/;/*teste lógico de parada*/;/*incremento/decremento*/){
	//bloco de código
}
//____________________________________________________________________________________________________________________________________





*
