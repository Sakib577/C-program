#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char c;
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}
