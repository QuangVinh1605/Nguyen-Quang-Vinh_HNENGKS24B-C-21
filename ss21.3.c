#include <stdio.h>

int main() {
    FILE *file;
    char input[1000];

    printf("nhap mot chuoi de ghi them vao file: ");
    fgets(input, sizeof(input), stdin);

    file = fopen("bt01.txt", "a");

    fprintf(file, "%s", input);

    fclose(file);

    printf("da ghi them chuoi vao file bt01.txt thanh cong!\n");

    return 0;
}

