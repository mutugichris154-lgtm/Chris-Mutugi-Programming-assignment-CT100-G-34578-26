#include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNumber[20];

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your bank balance in Kenya Shillings: ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%19s", phoneNumber);

    printf("\n--- USER DETAILS ---\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: KSh %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}