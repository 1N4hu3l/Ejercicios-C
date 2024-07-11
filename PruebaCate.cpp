/*Nahuel Hermosilla*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10



int main (){
	
	while(1){
		int opc=0;
		
		printf("____MENU____");
		printf("\n1. Anio bisiesto o no");
		printf("\n2. Entero y positivo");
		printf("\n3. Descuento entradas");
		printf("\n4. Valor catering");
		printf("\n5. ");
		printf("\n0. Salir");
		
		printf("\n\nSeleccione una opcion: ");
		scanf("%d",&opc);
		
		switch(opc){ 
		// punto 1 año bisiesto
			case 1:{
				int year=0;
				printf("\nIngrese el anio: ");
				scanf("%d", &year);
				
				if(year % 2 == 0 || year % 100 == 0 && year % 400 == 0){
					printf("\nEl anion %d es bisiesto", year);
					printf("\n\n");
				}else{
					printf("\nEl anio %d no es bisiesto", year);
					printf("\n\n");
				}
				break;
			}
		
		// punto 2 verificar si un numero es entero y positivoç
			case 2:{
				int numero=0;
				printf("\nIngrese un numero: ");
				scanf("%d", &numero);
				
				if(numero % 2 == 0){
					printf("\nEl numero %d es entero", numero);
					if(numero > 0){
						printf("\nEl numero %d es positivo", numero);
					}else if(numero<0){
						printf("\nEl numero %d es negativo", numero);
					}
					printf("\n\n");
				}else if( numero % 2 != 0){
					printf("\nEste numero no es entero");
					if(numero > 0){
						printf("\nEl numero %d es positivo", numero);
					}else if(numero<0){
						printf("\nEl numero %d es negativo", numero);
					}
					printf("\n");
				}
				
				int v[N];
				int mult=0;
				printf("\nSu tabla de de multiplicar es:\n");
				for(int i = 0; i<=N ; i++){
					mult = numero * i;
					printf("%d * %d = %d\n", numero, i, mult );
				}
				printf("\n");
				
				break;
			}
		
		// punto 3 Programa Descuento entradas (2(10%), 3(15%), 4(20%)) 
			case 3:{
				int ent=0;
				printf("\n____Cuantas entradas desea comprar____");
				printf("\n_______Cada entrada cuenta 100_______\n");
				printf("\n1. 2 entradas");
				printf("\n2. 3 entradas");
				printf("\n3. 4 entradas");
				
				printf("\n\nSeleccione una opcion: ");
				scanf("%d", &ent);
				
				switch (ent){
					case 1:{
						float entrada = 100;
						float desc = 0.10;
						float div = 0;
						float total = 0;
						printf("\nAl comprar 2 entradas se le realiza un descuento del 10%%");
						
						div= entrada * desc;
						total= entrada - div;
						printf("\nSe le restan %.2f al precio", div);
						printf("\nEl total es %.2f", total);
						printf("\n\n");
						
						break;
					}
					
					case 2: {
						float entrada = 100;
						float desc = 0.15;
						float div = 0;
						float total = 0;
						printf("\nAl comprar 3 entradas se le realiza un descuento del 15%%");
						
						div= entrada * desc;
						total= entrada - div;
						printf("\nSe le restan %.2f al precio", div);
						printf("\nEl total es %.2f", total);
						printf("\n\n");
						break;
					}
					
					case 3:{
						float entrada = 100;
						float desc = 0.20;
						float div = 0;
						float total = 0;
						printf("\nAl comprar 4 entradas se le realiza un descuento del 20%%");
						
						div= entrada * desc;
						total= entrada - div;
						printf("\nSe le restan %.2f al precio", div);
						printf("\nEl total es %.2f", total);
						printf("\n\n");
						break;
					}
				}
				break;
			}
		
		// punto 4 Catering
			case 4:{
				int plato = 6500;
				int total=0;
				srand (time(NULL));
				int per= 0 + rand() % 400;
				printf("\nLa cantidad de personas que asistienron al catering es: %d", per);
				
				if(per < 200){
					
					total = plato * per;
					printf("\nEl presio total es de: %d", total);
					printf("\n\n");
				}
				
				if(per > 200 && per <= 300){
					plato = 5500;
					total= plato * per;
					printf("\nEl presio total es de: %d", total);
					printf("\n\n");
				}
				
				if(per > 300){
					plato = 4500;
					total= plato * per;
					printf("\nEl presio total es de: %d", total);
					printf("\n\n");
				}
				
				break;
			}
			
			case 5:{
				char tipo;
				printf("\nIngrese que tipo de uva quierea (A/B): ");
				scanf("%s", &tipo);
				
				if(tipo == 'A' || tipo == 'a'){
					int tam=0;
					printf("\nIngrese el tamaño de la bolsa (1/2); ");
					scanf("%d", &tam);
					
					if (tam == 1){
						int precio = 200;
						int cant=0;
						int total=0;
						printf("\nIngrese la cantidad de bolsas que desea comprar: ");
						scanf("%d", &cant);
						
						total = precio * cant;
						printf("\nEl total es de: %d$", total);
						printf("\n\n");
						
					}
					if (tam == 2){
						int precio = 300;
						int cant=0;
						int total=0;
						printf("\nIngrese la cantidad de bolsas que desea comprar: ");
						scanf("%d", &cant);
						
						total = precio * cant;
						printf("\nEl total es de: %d$", total);
						printf("\n\n");
						
					}
					
				}
				
				if(tipo == 'B' || tipo == 'b'){
					int tam=0;
					printf("\nIngrese el tamaño de la bolsa (1/2); ");
					scanf("%d", &tam);
					
					if (tam == 1){
						int precio = 300;
						int cant=0;
						int total=0;
						printf("\nIngrese la cantidad de bolsas que desea comprar: ");
						scanf("%d", &cant);
						
						total = precio * cant;
						printf("\nEl total es de: %d$", total);
						printf("\n\n");
						
					}
					if (tam == 2){
						int precio = 500;
						int cant=0;
						int total=0;
						printf("\nIngrese la cantidad de bolsas que desea comprar: ");
						scanf("%d", &cant);
						
						total = precio * cant;
						printf("\nEl total es de: %d$", total);
						printf("\n\n");
						
					}
					
				}
				
				break;
			}
			
			
			case 0:
				printf("\nFIN DEL PROGRAMA");
				return 0;
			
			default:
				printf("\nIngrese una opcion valida\n\n ");
				break;
		}
		
	}
	
}
