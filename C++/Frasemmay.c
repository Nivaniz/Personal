#include <stdio.h>
#include <ctype.h>

#define TAMANO 30
/*leer una l�nea un texto en min�sculas y escribirla en may�sculas */
int main(void){
	char Letras[TAMANO];
	int cont;
	
	//Leer l�nea
	printf("\t\t\tEscribe la frase a convertir:");
	 for(cont=0;cont<TAMANO; cont++){
	    Letras[cont]=getchar();
	}//fin de for
	//escribir la l�nea en may�sculas
	 printf("\n\n\t\t\tLa frase en mayusculas es: \n");
	 for(cont=0;cont<TAMANO;++cont){
	 	putchar(toupper(Letras[cont]));
	 }//fin del segundo for
	 return 0;
}

