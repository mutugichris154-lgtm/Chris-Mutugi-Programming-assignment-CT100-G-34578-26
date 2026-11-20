
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char title[100];

    // Open file in append mode
    file = fopen("borrowed_books.txt", "a");

    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    // Remove newline character
    title[strcspn(title, "\n")] = '\0';

    // Store title in file
    fprintf(file, "%s\n", title);

    // Close file
    fclose(file);

    printf("Book title successfully stored!\n");

    return 0;
}
