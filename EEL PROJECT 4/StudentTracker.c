#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100
struct Student {
    char name[MAX_NAME_LENGTH];
    int rollNo;
    float marks;
    char email[MAX_NAME_LENGTH];
};
int compareStrings(char str1[], char str2[]) {
    return strcmp(str1, str2);
}
void copyString(char destination[], const char source[]) {
    strcpy(destination, source);
}
int stringLength(char str[]) {
    return strlen(str);
}
void concatenateStrings(char destination[], const char source[]) {
    strcat(destination, source);
}
void createEmail(struct Student *student) {
    char tempName[MAX_NAME_LENGTH];
    char *token = strtok(student->name, " ");
    if (token != NULL) {
        strcpy(tempName, token);
    }
    token = strtok(NULL, " ");
    if (token != NULL) {
        strcat(tempName, token);
    }
    strcat(tempName, "@mmcoe.edu.in");
    strcpy(student->email, tempName);
}
void compareMarks(struct Student student1, struct Student student2) {
    if (student1.marks > student2.marks) {
        printf("After comparing marks, Student 1 has greater marks than Student 2.\n");
    } else if (student1.marks < student2.marks) {
        printf("After comparing marks, Student 2 has greater marks than Student 1.\n");
    } else {
        printf("After comparing marks, both students have equal marks.\n");
    }
}
void displayStudentDetails(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Marks: %.2f\n", student.marks);
    printf("Email: %s\n", student.email);
}
int getIntegerInput() {
    int value;
    while (scanf("%d", &value) != 1 || value <= 0) {
        printf("INVALID INPUT. Please enter a valid positive number: ");
        while (getchar() != '\n');
    }
    return value;
}
float getFloatInput() {
    float value;
    while (scanf("%f", &value) != 1) {
        printf("INVALID INPUT. Please enter a valid number: ");
        while (getchar() != '\n');
    }
    return value;
}
int main() {
    struct Student students[MAX_STUDENTS];
    int n, i;
    printf("Enter number of students: ");
    n = getIntegerInput();
    if (n <= 0) {
        printf("INVALID INPUT. Number of students must be greater than 0.\n");
        return 1;
    }
    getchar();
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name (First and Last): ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Enter roll number: ");
        students[i].rollNo = getIntegerInput();
        printf("Enter marks: ");
        students[i].marks = getFloatInput();
        getchar();
        createEmail(&students[i]);
    }
    printf("\nString Operations:\n");
    if (compareStrings(students[0].name, students[1].name) == 0) {
        printf("The names of student 1 and student 2 are the same.\n");
    } else {
        printf("The names of student 1 and student 2 are different.\n");
    }
    char tempName[MAX_NAME_LENGTH];
    copyString(tempName, students[0].name);
    printf("The name of the first student is: %s\n", tempName);
    printf("Length of the first student's name is: %d\n", stringLength(students[0].name));
    if (n > 1) {
        compareMarks(students[0], students[1]);
    }
    for (i = 0; i < n; i++) {
        printf("\nStudent %d details:\n", i + 1);
        displayStudentDetails(students[i]);
    }
    return 0;
}
