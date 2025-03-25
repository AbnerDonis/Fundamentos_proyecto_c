#include <stdio.h>

void convertirMoneda(float cantidad, int opcionOrigen, int opcionDestino) {
    // Tasas de cambio de ejemplo (puedes actualizarlas según las tasas reales)
    float tasaQuetzalADolar = 0.13;  // 1 GTQ = 0.13 USD
    float tasaQuetzalAEuro = 0.12;   // 1 GTQ = 0.12 EUR
    float tasaDolarAQuetzal = 7.75;   // 1 USD = 7.75 GTQ
    float tasaDolarAEuro = 0.92;     // 1 USD = 0.92 EUR
    float tasaEuroAQuetzal = 9.00;   // 1 EUR = 9.00 GTQ
    float tasaEuroADolar = 1.09;     // 1 EUR = 1.09 USD

    float resultado;

    // Realizar la conversión según las opciones seleccionadas
    if (opcionOrigen == 1 && opcionDestino == 2) {
        resultado = cantidad * tasaQuetzalADolar;
        printf("%.2f Quetzales equivalen a %.2f Dólares.\n", cantidad, resultado);
    } else if (opcionOrigen == 1 && opcionDestino == 3) {
        resultado = cantidad * tasaQuetzalAEuro;
        printf("%.2f Quetzales equivalen a %.2f Euros.\n", cantidad, resultado);
    } else if (opcionOrigen == 2 && opcionDestino == 1) {
        resultado = cantidad * tasaDolarAQuetzal;
        printf("%.2f Dólares equivalen a %.2f Quetzales.\n", cantidad, resultado);
    } else if (opcionOrigen == 2 && opcionDestino == 3) {
        resultado = cantidad * tasaDolarAEuro;
        printf("%.2f Dólares equivalen a %.2f Euros.\n", cantidad, resultado);
    } else if (opcionOrigen == 3 && opcionDestino == 1) {
        resultado = cantidad * tasaEuroAQuetzal;
        printf("%.2f Euros equivalen a %.2f Quetzales.\n", cantidad, resultado);
    } else if (opcionOrigen == 3 && opcionDestino == 2) {
        resultado = cantidad * tasaEuroADolar;
        printf("%.2f Euros equivalen a %.2f Dólares.\n", cantidad, resultado);
    } else {
        printf("Opción no válida.\n");
    }
}

int main() {
    int opcionOrigen, opcionDestino;
    float cantidad;

    printf("Conversor de Monedas\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares (USD)\n");
    printf("3. Euros (EUR)\n");
    
    // Solicitar al usuario que ingrese la moneda de origen
    printf("Seleccione la moneda de origen (1-Quetzales, 2-Dólares, 3-Euros): ");
    scanf("%d", &opcionOrigen);
    
    // Solicitar al usuario que ingrese la moneda de destino
    printf("Seleccione la moneda de destino (1-Quetzales, 2-Dólares, 3-Euros): ");
    scanf("%d", &opcionDestino);

    // Solicitar al usuario que ingrese la cantidad a convertir
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    // Llamar a la función para realizar la conversión
    convertirMoneda(cantidad, opcionOrigen, opcionDestino);

    return 0;
}