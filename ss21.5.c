#include <stdio.h>

int main() {
    FILE *file;
    char line[1000];
    int numLines;

    printf("nhap so dong can ghi vao file bt05.txt: ");
    scanf("%d", &numLines);
    getchar();

    file = fopen("bt05.txt", "w");

    for (int i = 0; i < numLines; i++) {
        printf("nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    fclose(file);

    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("khong the mo file bt05.txt de doc.\n");
        return 1;
    }

    printf("noi dung trong file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}

