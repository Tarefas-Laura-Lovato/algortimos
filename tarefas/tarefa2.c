//O programa deve receber a temperatura em graus Celsius e converter para Kelvin e Fahrenheit.

#include <stdio.h>
#include <math.h>

int main() {
    float temperatura, kelvin, fahrenheit;

    printf("Entre com a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    kelvin = temperatura + 273.15;
    fahrenheit = temperatura * 1.8 + 32;

    printf("%2.fC equivalem a %2.fK e %2.fF", temperatura, kelvin, fahrenheit);

    return 0;
}