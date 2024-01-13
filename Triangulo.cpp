//triangulo
#include<stdio.h>
main()
{
	float A, B, C;
	printf("digite os valores de todos os lados de um triagulo\n");
	scanf(" %f", &A);
	scanf(" %f", &B);
	scanf(" %f", &C);
	
	  if (A < B + C  &&  B < A + C && C < A + B){
	  
	  

      if (A == B && B == C){
	  
	  

          printf("Triangulo Equilátero \n");}

      else
	  

          if (A == B || A == C || C == B){
		  
		

              printf("Triangulo Isosceles \n");}

          else{
		  
		  
              printf("Triangulo Escaleno \n");}}

    else{
	
	

      printf("Os valores fornecidos nao formam um triangulo \n");}
		
	
	
}

