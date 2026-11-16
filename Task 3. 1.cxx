#include <stdio.h>

int main() {
    float attendance, marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    
    printf("Enter average marks: ");
    scanf("%f", &marks);

    if (attendance >= 75.0 && marks >= 40.0) {
        printf("Eligible\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
