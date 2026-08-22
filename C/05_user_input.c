#include <stdio.h>
#include <string.h> // a lot of helpful function related to string

int main() {
    // Settting -> Code runner -> Check box: Run In Terminal & clear previous output
    // Setting -> Code runner -> Executor Map -> Edit in Setting .json file
    // editor.fontsize: 16-36;
    // code-runner.saveALLFilesBeforeRun: true;
    // c: window = clear && , Macos: cls && <>

    // declares variables but not assign it yet
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = ""; // 30 bytes or 30 characters

    // Use "scanf" to accept input
    // but scanf can't read the white space
    printf("Enter your age: ");
    scanf("%d", &age); // & is address of operator

    printf("Enter your gpa: "); // beware of input buffer
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // add the "blank space" before the %, skip over that new line character

    getchar(); // solves input buffer
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // fgets = file get string and add "stdin" standard input
    name[strlen(name) - 1] = '\0'; // set the null terminator

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}