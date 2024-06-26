//Cach 1
#include <stdio.h>
#include <stdlib.h>
struct Student {
     int id;
     char name [50];
     float grade;
};
int main(){
    int n, i;
    printf("Nhap vao so luong sinh vien: ");
    scanf("%d",&n);

    struct Student* students = (struct Student*)malloc(n*sizeof(struct Student));

    for(i = 0; i < n; i++){
         printf("\nNhap thong tin cho sinh vien thu %d\n", i+1);
         printf("Nhap ID: ");
         scanf("%d", &students[i].id);
         getchar();
         printf("Nhap ten: ");
         scanf("%[^\n]s", students[i].name);
         printf("Nhap diem: ");
         scanf("%f", &students[i].grade);
         getchar();
    }
    printf("\nThong tin cac sinh vien da nhap: \n");
    for(i = 0; i < n; i++){
         printf("\nSinh vien thu %d\n", i+1);
         printf("ID: %d\n", students[i].id);
         printf("Name: %s\n", students[i].name);
         printf("Grade: %.2f\n", students[i].grade);
    }
    free(students);
    return 0;
}

//Cach 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

int main() {
    int n, i;
    printf("Nhap vao so luong sinh vien: ");
    scanf("%d", &n);

    struct Student *students = (struct Student*) malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d\n", i + 1);
        printf("Nhap ID: ");
        scanf("%d", &students[i].id);
        
        // Clear the input buffer before reading a string
        getchar();
        
        printf("Nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
        
        printf("Nhap diem: ");
        scanf("%f", &students[i].grade);
    }
    printf("\nThong tin cac sinh vien da nhap: \n");
    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Grade: %.2f\n", students[i].grade);
    }

    free(students);
    return 0;
}
