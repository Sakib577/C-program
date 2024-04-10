#include <stdio.h>
int main() {
    FILE* fp;
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    // write a single character to the file
    fputc('A', fp);
    fputc('\n', fp);
    // write a string to the file
    fputs("Hello, World!\n", fp);
    // write a formatted string to the file
    fprintf(fp, "The value of pi is %f\n", 3.14159);
  
    fclose(fp);
    return 0;
}