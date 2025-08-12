/*
Write a C program to store and display information about a list of courses,
where each course has a subject name and corresponding marks. The number of
courses should be taken as input from the user. Dynamically allocate memory for
storing the records using malloc. Accept subject name and marks for each record
from the user. Display the stored information. Finally, release the allocated
memory using free.
*/

struct Course {
    char name[50];
    double marks;
};

int main() {
    int n;

    printf("Enter number of courses : ");
    scanf("%d", &n);

    struct Course *courses = malloc(n * sizeof(struct Course));

    printf("Enter")

        return 0;
}