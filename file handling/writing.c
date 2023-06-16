#include <stdio.h>

int main() {
    FILE *file = fopen("demo.txt", "r+");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fseek(file, -10, SEEK_END); // Move the file pointer 10 characters before the end

    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c); // Print the character to the console
    }
    fclose(file);
    return 0;
}
