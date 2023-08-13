// So this is a terminal applucation that let's the user enter, see, and delete student records
#include <stdio.h>
#include <string.h>

int Records();
void Write();
void Delete();

typedef struct
{
    int id, age;
    char name[20];
} student;

int main(void)
{
    int input;
    printf("Enter 1 to See the records :\n");
    printf("Enter 2 to Add a record :\n");
    printf("Enter 3 to Delete a record :\n");
    // Here we take the user input
    scanf("%i", &input);
    switch (input)
    {
    case 1:
        Records();
        break;
    case 2:
        Write();
        break;
    case 3:
        Delete();
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}

int Records()
{
    FILE *file = fopen("2_Student.txt", "r"); // Open file for reading

    if (file == NULL)
    {
        perror("Error opening file");
    }

    char buffer[100]; // Buffer to store read data

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer); // Print the read line
    }

    fclose(file); // Close the file
}

void Write()
{
    // Here we take the input from the user
    student aman;
    printf("Enter Your Name : ");
    scanf("%s", aman.name);
    printf("Enter Your ID(int) : ");
    scanf("%i", &aman.id);
    printf("Enter Your Age : ");
    scanf("%i", &aman.age);
    FILE *file = fopen("2_Student.txt", "w"); // Open file for writing

    if (file == NULL)
    {
        perror("Error opening file");
    }

    fprintf(file, "Name: %s\n", aman.name);
    fprintf(file, "ID: %i\n", aman.id);
    fprintf(file, "Age: %i\n", aman.age);

    fclose(file); // Close the file
}

void Delete()
{
    FILE *file = fopen("2_Student.txt", "w"); // Open file for writing

    if (file == NULL)
    {
        perror("Error opening file");
    }

    // Close the file to effectively delete its content
    fclose(file);
}