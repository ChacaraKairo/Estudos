#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{printf("digite a idade do competidor\n");
int idade;
scanf(" %d", &idade);
	/*switch(idade){
		case 0 ... 4 : printf("Categoria Invalida"); break;
	 	case 5 ... 7 : printf("Infantil A"); break;
	 	case 8 ... 10 :printf("Infantil B") ; break;
	 	case 11 ... 13 :printf("Juvenil A") ; break;
	 	case 14 ... 17 :printf("Juvenil B") ; break;
	 	default : printf("Adulto");break;
	 }   
	 printf("\n");     */
	 (idade<5) ? printf("Categoria Invalida") : (idade>=5 && idade<=7) ? printf("Infantil A") :
	 (idade>=8 && idade<=10) ? printf("Infantil B") : (idade>=11 && idade<=13) ? printf("Juvenil A") :
	 (idade>=14 && idade<=17) ? printf("Juvenil B") : printf("Adulto");
	 printf("\n");
system("pause");	
}
