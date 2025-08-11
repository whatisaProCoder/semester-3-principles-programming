// Take input of employee details using structure and print them using pointer

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
};

int main() {
    struct Employee data[20];
    int size;

    printf("Enter number of employees (max:20) : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter details of employee %d...\n", i + 1);

        printf("Name: ");
        scanf("%s", data[i].name);
        printf("ID: ");
        scanf("%d", &data[i].id);
    }

    printf("Printing employee details...\n");
    for (int i = 0; i < size; i++) {
        struct Employee *ptr = &data[i];
        printf("Employee %d : %s (ID:%d)\n", i + 1, ptr->name, ptr->id);
    }
}
