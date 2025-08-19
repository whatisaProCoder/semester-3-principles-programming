/*
Word Frequency Counter

Read a text file and count the frequency of each word.

Save the results in another file in the format:
word1 → frequency
word2 → frequency
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN 50
#define LINE_LEN 500
#define MAX_WORDS 1000

struct Word {
    char word[WORD_LEN];
    int count;
};

int main() {
    FILE *fp = fopen("words.txt", "r");
    if (!fp) {
        printf("Error opening file...\n");
        return 1;
    }

    struct Word words[MAX_WORDS];
    int n = 0;
    char line[LINE_LEN];

    while (fgets(line, sizeof(line), fp)) {
        for (int i = 0; line[i]; i++) {
            line[i] = tolower(line[i]);
        }

        char *token = strtok(line, " .,-!?:\n\t\"");

        while (token) {
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(words[i].word, token) == 0) {
                    words[i].count++;
                    found = 1;
                    break;
                }
            }

            if (!found && n < MAX_WORDS) {
                strcpy(words[n].word, token);
                words[n].count = 1;
                n++;
            }

            token = strtok(NULL, " .,-!?:\n\t\"");
        }
    }

    FILE *fp1 = fopen("frequencies.txt", "w");
    for (int i = 0; i < n; i++) {
        struct Word word = words[i];
        fprintf(fp1, "%s → %d\n", word.word, word.count);
    }

    fclose(fp);
    fclose(fp1);

    return 0;
}