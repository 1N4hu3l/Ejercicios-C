#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main() {
	int vector[N];
	srand(time(NULL));
 	
	for (int i = 0; i < N; i++) {
    	vector[i] = 0 + rand() % 100;
  	}
	
	for(int i =0; i<78; i++){
		printf("_");
	}
	printf("\n");
	for (int i = 0; i < N; i++) {
		printf("|%d|", vector[i]);
	}
	
	int suma=0;
	for(int i = 0; i<N;i++){
		suma += vector[i];
	}
	
	
	
	printf("\n\n\nLa suma es: \%d", suma);
	float prom=0;
	prom = suma/N;
	printf("\nEl promedio es: %.2f", prom);
	

  return 0;
}
