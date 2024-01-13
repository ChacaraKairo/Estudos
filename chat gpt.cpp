#include <stdio.h>

main()
{
	char resposta;
    
    do {
  	int n;
	scanf(" %x", &n);
	printf("%x", n);
	

        
        printf("Deseja executar novamente? (s/n): ");
        scanf(" %c", &resposta);  // Note o espaço antes de %c para consumir o caractere de nova linha
        
    } while (resposta == 's' || resposta == 'S');
    
	return 0;
}






