#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{ // think of 'struct' like a Blueprint
    char name[50];
    int age;
    float gpa;
    bool isFuLLTime;
} Student;

void printStudent(Student student); // function prototype

int main()
{

    // struct = A custom container that holds multiple
    // piece of related information.
    // Similar to object in other languages.
    // C version of OOP (Objected-Oriented-Program)

    Student student1 = {"Fluke", 30, 3.46, true};
    Student student2 = {"Lucia", 27, 2.78, false};
    Student student3 = {"Jason", 25, 2.15, false};
    Student student4 = {0}; // clear the memory and reset it

    strcpy(student4.name, "Mendez"); // use a copy to save memory management
    student4.age = 32;
    student4.gpa = 4.0;
    student4.isFuLLTime = true;

    // strncpy(student4.name, "Mendes", 5); // safely copy a certain amount of characters

    printStudent(student1); // call the function
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

// pass struct to the function
void printStudent(Student student)
{
    printf("Name: %s\n", student.name); // to access the member of the 'struct' use 'dot'
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-Time: %s\n", (student.isFuLLTime) ? "Yes" : "No");
    printf("\n");
}