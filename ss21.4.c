#include <stdio.h>
int main() {
    FILE *file;
    char line[1000];
    file = fopen("bt01.txt", "r");
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("dong dau tien trong file la: %s", line);
    } else {
        printf("file bt01.txt rong hoac khong co noi dung hop le.\n");
    }

    fclose(file);

    return 0;
}

