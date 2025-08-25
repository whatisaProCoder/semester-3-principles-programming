/*
Copy File with Case Conversion

Read contents of a file and copy them into another file.

While copying:

Convert all lowercase letters to uppercase.

Convert all uppercase letters to lowercase.

*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 500

int main() {
    FILE *fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen("output.txt", "w");

    char line[MAX_LEN];

    while (fgets(line, sizeof(line), fp1)) {
        for (int i = 0; line[i]; i++) {
            if (isupper(line[i]))
                line[i] = tolower(line[i]);
            else if (islower(line[i]))
                line[i] = toupper(line[i]);
        }
        fprintf(fp2, "%s", line);
    }

    printf("Processed successfully...\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}