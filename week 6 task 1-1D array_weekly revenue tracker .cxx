
#include <stdio.h>

int main()
{
    float revenue[7];
    float total = 0, average;
    int i;

    // Input revenue for each day
    for(i = 0; i < 7; i++)
    {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);

        total = total + revenue[i];
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\nTotal Weekly Revenue = KSh. %.2f\n", total);
    printf("Average Daily Revenue = KSh. %.2f\n", average);

    return 0;
}
