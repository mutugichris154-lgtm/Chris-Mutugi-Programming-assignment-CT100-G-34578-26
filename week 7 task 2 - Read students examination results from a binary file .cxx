
#include <stdio.h>

struct Student
{
    char name[50];
    char regNumber[30];
    float marks;
};

int main()
{
    FILE *file;
    struct Student student;

    // Open binary file for reading
    file = fopen("results.dat", "rb");

    if(file == NULL)
    {
        printf("Error opening results.dat!\n");
        return 1;
    }

    printf("STUDENT EXAMINATION RESULTS\n");
    printf("---------------------------\n");

    // Read and display student records
    while(fread(&student, sizeof(student), 1, file) == 1)
    {
        printf("Student Name: %s\n", student.name);
        printf("Registration Number: %s\n", student.regNumber);
        printf("Total Marks: %.2f\n", student.marks);

        printf("---------------------------\n");
    }

    // Close file
    fclose(file);

    return 0;
}
