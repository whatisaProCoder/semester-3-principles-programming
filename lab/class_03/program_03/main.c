/*
Merge Two Files.
Take two text files as input and merge their contents into a
third file. Add line numbers while writing into the new file.
*/

#include <stdio.h>
#include <stdlib.h>

#define LINE_LEN 500

int main() {
    FILE *fp1 = fopen("first.txt", "r");
    FILE *fp2 = fopen("second.txt", "r");
    FILE *fp3 = fopen("merged.txt", "w");

    int lineNumber = 1;
    char line[LINE_LEN];

    while (fgets(line, sizeof(line), fp1)) {
        fprintf(fp3, "%d %s", lineNumber++, line);
    }

    fprintf(fp3, "\n");

    while (fgets(line, sizeof(line), fp2)) {
        fprintf(fp3, "%d %s", lineNumber++, line);
    }

    printf("Text files merged...\n");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
