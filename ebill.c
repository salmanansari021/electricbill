#include <stdio.h>

int main() {
    float units, bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    
    if (units <= 50) {
        bill = units * 0.50;   
    }
    else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;   
    }
    else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;   
    }
    else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;   
    }
    float fixedCharges = 20.0;   
    float tax = 0.18;   
    
    bill += fixedCharges;
    float totalBill = bill + (bill * tax);

      
    printf("Total electricity bill: %.2f\n", totalBill);

    return 0;
}