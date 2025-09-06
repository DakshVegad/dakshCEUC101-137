#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Example temperatures to convert
    celsius = 0;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Celsius: %.2f => Fahrenheit: %.2f\n", celsius, fahrenheit);

    celsius = 100;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Celsius: %.2f => Fahrenheit: %.2f\n", celsius, fahrenheit);

    celsius = -40;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Celsius: %.2f => Fahrenheit: %.2f\n", celsius, fahrenheit);

    return 0;
}
