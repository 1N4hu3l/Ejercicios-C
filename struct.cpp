#include <stdio.h>

struct perro {
  char nombre[30];
  int edadMeses;
  float peso;
} perros[3];
/*perro1={"chikorita", 10, 3.50}
perro2={"Terreneitor", 13, 60.30};*/

int main() {
  /*
    printf("El perro se llama: %s", perro1.nombe);
    printf("\nPesa: %.2f", perro1.peso);
    printf("\nSu edad es: %d", perro1.edadMeses);
  */
  for (int i = 0; i < 3; i++) {
    printf("Ingrese el nombre del perro %i: ", i + 1);
    scanf("%s", &perros[i].nombre);
    printf("\nIngrese la edad del perro %i: ", i + 1);
    scanf("%d", &perros[i].edadMeses);
    printf("\nIngrese el peso del perro %i: ", i + 1);
    scanf("%f", &perros[i].peso);
    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    printf("\nEl perro %i se llama: %s", i + 1, perros[i].nombre);
    printf("\nPesa: %.2f KG", i + 1, perros[i].peso);
    printf("\nTiene: %d meses", i + 1, perros[i].edadMeses);
  }
}
