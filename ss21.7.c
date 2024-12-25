#include <stdio.h>

struct Student {
    int id;
    char name[100];
    int age;
};

void writeToFile(struct Student *students, int count) {
    FILE *file = fopen("students.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
    }

    fclose(file);
}

int main() {
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Khong du bo nho de cap phat cho sinh vien.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Ten: ");
        getchar();
        fgets(students[i].name,100, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }

    writeToFile(students, n);

    free(students);

    printf("Thong tin da duoc luu vao file students.txt.\n");

    return 0;
}

