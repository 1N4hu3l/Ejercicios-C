#include <stdio.h>
//#define N 5
#define PI 3.14159
/* 
	a) Realizar un menu.
	b)Realizar un programa en el que se ingrese N cantidad de numeros.
	c) Mostrar suma, resta, multiplicacion y division
	d) Calcular el area, perimetro, radio, diametro, superficie dependiendo la figura
*/

int main(){
	
	int N;
	
	printf("Ingrese El tamaño del vector (sum,rest,mult y div): ");
	scanf("%d", &N);
	printf("\n");
	
	int opc;
	int num[N];
	int suma=0, resta=0,mult=0;
	float div=0;


	while(1){
		printf("____MENU____");
		printf("\n1. Suma, Resta, Mult y Div");
		printf("\n2. figuras");
		printf("\n3. salir");
		printf("\n\nSeleccione una opcion: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				
				for(int i=0;i<N;i++){
					printf("\nIngrese el %d%c: ",i+1,248);
					scanf("%d",&num[i]);				
				}
				
				for(int i=0;i<N;i++){
					suma +=num[i];
					if(i==0){
						resta = num[i];
						mult = num[i];
						if(N == 2){
							div = num[i];
						}
					}else{
						resta -=num[i];
						mult *=num[i];
						if(N==2){
							if(num[1]!= 0){
								div /= num[i];
							}
						}
					}
				}
				
				printf("\nLa suma de los numeros es: %d",suma);
				printf("\nLa resta de los numeros es: %d", resta);
				if(N > 2){
					printf("\nLa multiplicacion entre todos los numeros es: %d",mult);
				}else if(N == 2){
					printf("\nLa multiplicacion de los numeros es: %d",mult);
				}
				if(N==2){
					if(num[1] != 0){
						printf("\nLa division de los numeros es: %.2f", div);
					}else{
						printf("\nError: No es posible dividir por cero");
					}
				}
				printf("\n\n");
				
				break;
			case 2:{
				int fig;
				printf("\n____Figuras____");
				printf("\n1. Circulo");
				printf("\n2. Cuadrado");
				printf("\n3. Rectangulo");
				printf("\n\nSeleccione una figura: ");
				scanf("%d", &fig);
				
				switch(fig){
					case 1:{
						float radio=0, area=0, perimetro=0;
						printf("\nIngrese el radio del circulo: ");
						scanf("%f",&radio);
						
						area= PI * radio * radio;
						perimetro = 2 * PI * radio;
						
						printf("\nEl area del circulo es: %.2f", area);
						printf("\nEl perimetro del circulo es: %.2f", perimetro);
						printf("\n\n");
						break;
					}
					case 2:{
						float lado=0, area=0, perimetro=0;
						printf("\nIngrese el lado del cuadrado: ");
						scanf("%f",&lado);
						
						area = lado * lado;
						perimetro = 4 * lado;
						
						printf("\nEl area es: %.2f", area);
						printf("\nEl perimetro es: %.2f", perimetro);
						printf("\n\n");
						break;
					}

					case 3:{
						float largo=0, ancho=0,area=0,perimetro=0;
						
						printf("\nIngrese el Largo del rectangulo: ");
						scanf("%f", &largo);
						printf("Ingrese el ancho del rectangulo: ");
						scanf("%f", &ancho);
						
						area= largo * ancho;
						perimetro = 2 * (largo + ancho);
						
						if(largo != ancho){
							printf("\nEl area es: %.2f", area);
							printf("\nEl perimetro es: %.2f", perimetro);
							printf("\n\n");
						}else if (largo == ancho){
							printf("\nESTO ES UN CUADRADO");
							float lado = 0;
							lado = largo;
							
							area = lado * lado;
							perimetro = 4 * lado;
							
							printf("\nEl area es: %.2f", area);
							printf("\nEl perimetro es: %.2f", perimetro);
							printf("\n\n");
							
						}
						
						break;
					}
					
					default:
						printf("\nOpcion no valida");
						printf("\n\n");
						break;

					
				}
				
				break;
			}
			
			
			case 3:
				printf("\n¡GRACIAS POR UTULIZAR ESTE PROGRAMA!");
				return 0;
			default:
				printf("\nOpcion no valida");
				printf("\n\n");
		}
		
		
	}
	return 0;
}
