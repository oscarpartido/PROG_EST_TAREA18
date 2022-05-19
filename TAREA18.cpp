/*TAREA 5 
OSCAR VIVALDI PARTIDO RAMIREZ FECHA:04/04/2022
hacer un programa que incluya Hacer un programa que incluya la libreria string.h y utilice las siguientes funciones para dar un ejemplo de su uso:
	-strlen
	-strcat
	-strcpy
	-strcmp
	-strncpy
	-strstr
El programa debe mostrar un menú donde se indique que función quiere probar(usar la opción 0 para salir),
 una vez que se elegida, el programa pide la(s) cadena(s) necesaria(s) para hacer la demostración: debe 
 imprimir una breve descripción de lo que hace la función y da el resultado.
 */
 #include <stdio.h>
 #include <string.h>
 #include<stdlib.h>
 //prototipos 
 int menu();
 int validarEnteros(int inferior, int superior);
 //declaraciones globales 

 //principal 
	int main(){
		int opcion,longitud=0;
		char cadena[]="hola mundo";
		char texto[30];
		char nombre[]="Oscar Vivaldi";
		char apellido[]="Partido Ramirez";
		char s1[13] = "Hola a todos";
   		char s2[3] = "la";		
	 	
		 do{
	 	opcion=menu();
	 	switch(opcion){
 			case 0: printf("adios...\n");
 					system("PAUSE");
 					break;
 			case 1: printf("****STRLEN****\n");
 					longitud=strlen(cadena);
 					printf("strlen pide como parametro una cadena y calcula la longitud de la misma\n");
					printf("ejemplo:hola mundo");
					printf("la longitud del texto  es: %d \n",longitud);
					system("PAUSE");
 					break;
 			case 2: printf("****STRCAT****\n");
 					printf("nos ayuda a concatenar una cadena con otra\n");
 					printf("ejemplo:\ncadena 1(oscar vivaldi)\ncadena 2(partido ramirez)");
 					strcat( nombre, apellido );
  					 printf( "\n resultado:%s\n", nombre);
 					system("PAUSE");
 					break;
 			case 3: printf("****STRCPY****\n");
 					printf("nos sirve para copiar de una cadena a otra.\n");
 					printf("ejemplo:\ncadena1(vacia) \ncadena2(hola mundo)\n");
 					printf("se pasara la cadena de nombre a la que esta vacia.");
 					strcpy(texto, cadena);
 					printf("\nresultado:%s\n",texto);
 					system("PAUSE");
 					break;
 			case 4: printf("****STRCMP****\n");
 					printf("Compara cadenas.\n");
 					printf("ejemplo: cadena1(oscar vivaldi\ncadena2(partido ramirez)\n)");
 					printf("compara si contienen el mismo texto.En este caso no son iguales.\n");
 					if(strcmp(nombre,apellido)==0){
 						printf("Ambas cadenas son iguales.\n");
					 }
 					system("PAUSE");
 					break;
 			case 5: printf("****STRNCPY****\n");
 					printf("copiar cadena por partes\n");
 					printf("ejemplo solo quiero copiar (hola)de mi cadena(hola mundo)\n");
 					strncpy(texto,cadena,4);
 					printf("\ntexto:%s\n",texto);
 					system("PAUSE");
 					break;
 			case 6: printf("****STRSTR****\n");
 					printf("retorna un puntero a la cadena encontrada\n");
 					printf( "s1=%s\n", s1 );
  					printf( "s2=%s\n", s2 );
   					printf( "strstr(s1,s2) = %s\n", strstr( s1, s2 ) );
 					system("PAUSE");
 					break;
 		
			}
		}while(opcion!=0);
 	return 0;
}
 //funciones 
 int menu(){
		int opcion;
		printf("-----MENU PRINCIPAL------\n");
		printf("0. Salir	\n");
		printf("1. Strlen	\n");
		printf("2. Strcat	\n");
		printf("3. Strcpy	\n");
		printf("4. Strcmp	\n");
		printf("5. Strncpy	\n");
		printf("6. Strstr	 \n");
		printf("---------------------------------\n");
		printf("Selecciona una opcion: ");
		opcion=validarEnteros(0,6);
		return opcion;
	}
	int validarEnteros(int inferior, int superior) {
		int valor;
		do {
			scanf("%d",&valor);
			if(valor<inferior || valor>superior){
				printf("Dato invalido!!! debe estar entre (%d- %d). vuelva a introducirlo:\n",inferior,superior);
			}
		}while(valor<inferior ||valor>superior);
		return valor;
	}
	

