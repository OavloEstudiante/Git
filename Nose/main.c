#include <stdio.h>

void contarParesImpares() {
    int numero;
    int pares = 0;
    int impares = 0;

    do {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero > 0) { 
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        } else if (numero == 0) {
            printf("El 0 no cuenta en el conteo de pares e impares\n");
        }
    } while (numero >= 0);

    printf("Cantidad de numeros pares ingresados: %d\n", pares);
    printf("Cantidad de numeros impares ingresados: %d\n", impares);
}

int main(int argc, char *argv[]) {
    char opcion;

    do {
        contarParesImpares();
        printf("¿Desea ingresar números de nuevo? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
