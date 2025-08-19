/*
Student Records Management

Create a program to store student records (name, roll number, marks) in a file.

Provide options to:
1. Add a new record
2. Display all records
3. Search for a student by roll number
4. Update marks of a student
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void addRecord() {
    FILE *fp = fopen("data.dat", "ab");
    if (!fp) {
        printf("Error opening file...\n");
        return;
    }
    struct Student s;
    printf("Enter name: ");
    scanf("%49[^\n]", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Record added successfully!\n");
}

void displayRecords() {
    FILE *fp = fopen("data.dat", "rb");
    if (!fp) {
        printf("Error opening file...\n");
        return;
    }
    struct Student s;
    printf("\n---Student Records---\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll: %d | Name: %s | Marks: %.2f", s.roll, s.name, s.marks);
    }
    fclose(fp);
}

void searchRecord() {
    FILE *fp = fopen("data.dat", "rb");
    if (!fp) {
        printf("Error opening file...");
        return;
    }
    int roll, found = 0;
    struct Student s;
    printf("Enter roll to search: ");
    scanf("%d", &s.roll);
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Student found!\n");
            printf("Roll: %d | Name: %s | Marks: %.2f", s.roll, s.name,
                   s.marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with roll: %d not found...\n", roll);
    }
    fclose(fp);
}

void updateMarks() {
    FILE *fp = fopen("data.dat", "rb+");
    if (!fp) {
        printf("Error opening file...");
        return;
    }
    int roll, found = 0;
    struct Student s;
    printf("Enter roll to search: ");
    scanf("%d", &s.roll);
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        if (s.roll == roll) {
            printf("Student found!\n");
            printf("Roll: %d | Name: %s | Marks: %.2f", s.roll, s.name,
                   s.marks);

            printf("Enter new marks: ");
            scanf("%f", &s.marks);

            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            printf("Marks updated successfully!\n");

            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with roll: %d not found...\n", roll);
    }
    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n--- Student Records Management (Binary File) ---\n");
        printf("1. Add New Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Roll Number\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                searchRecord();
                break;
            case 4:
                updateMarks();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}