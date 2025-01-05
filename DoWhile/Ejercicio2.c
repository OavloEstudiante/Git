#include <stdio.h>

int main(int argc, char *argv[]) {
    float diametro, altura;
    float suma_diametro = 0, suma_altura = 0;
    int cantidad_troncos = 0;
    char continuar;

    do {
        printf("Ingrese el diametro del tronco (en metros): ");
        scanf("%f", &diametro);

        printf("Ingrese la altura del tronco (en metros): ");
        scanf("%f", &altura);

        suma_diametro += diametro;
        suma_altura += altura;
        cantidad_troncos++;

        printf("Desea ingresar otro tronco? (S/N): ");
        scanf(" %c", &continuar); 

    } while (continuar == 'S' || continuar == 's');

    if (cantidad_troncos > 0) {
        float promedio_diametro = suma_diametro / cantidad_troncos;
        float promedio_altura = suma_altura / cantidad_troncos;

        printf("Resultados:\n");
        printf("Promedio de diametro: %.2f metros\n", promedio_diametro);
        printf("Promedio de altura: %.2f metros\n", promedio_altura);
    } else {
        printf("No se ingresaron datos.\n");
    }

    return 0;
}