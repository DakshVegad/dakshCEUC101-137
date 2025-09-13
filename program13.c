#include <stdio.h>

int main() {
    int tankLevel =0;  
    int maxCapacity = 100; 
    int refillRate = 10;

    printf("---- Automatic Tank Refill Simulation ----\n\n");

    // Loop until the tank reaches maximum capacity
    while (tankLevel < maxCapacity) {
        tankLevel += refillRate;  
        printf("Current water level: %d liters\n", tankLevel);
    }


    printf("Tank is full.\n");

    return 0;
}
