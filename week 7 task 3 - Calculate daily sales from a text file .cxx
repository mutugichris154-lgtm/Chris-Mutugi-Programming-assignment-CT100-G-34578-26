
#include <stdio.h>

int main()
{
    FILE *file;
    float amount;
    float totalSales = 0;

    // Open sales file for reading
    file = fopen("sales.txt", "r");

    if(file == NULL)
    {
        printf("Error opening sales.txt!\n");
        return 1;
    }

    // Read all transactions
    while(fscanf(file, "%f", &amount) == 1)
    {
        totalSales = totalSales + amount;
    }

    // Display total sales
    printf("TOTAL DAILY SALES\n");
    printf("-----------------\n");
    printf("Total Sales = KSh. %.2f\n", totalSales);

    // Close file
    fclose(file);

    printf("File successfully closed.\n");

    return 0;
}
