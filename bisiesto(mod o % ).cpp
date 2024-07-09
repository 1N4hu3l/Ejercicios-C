//Año Bisiesto con mod o %
#include <stdio.h>

int num=0;

int main(){
	printf("Ingrese el anio: ");
	scanf("%d",&num);
	
	if(num%4==0 && num%100!=0 || num%400 == 0){
		printf("\nEl anio %d es bisiesto", num);
	}else{
		printf("\nEl anio %d no es bisiesto", num);
	}
	
}
