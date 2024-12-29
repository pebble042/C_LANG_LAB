#include <stdio.h>
#include <string.h>

void showCritical(char name[100][50], int n, float GPA[100], int id[100]);

int main() {
    int i, n, id[100];
    char name[100][50], factory[100][50];
    float gpa[100];

    printf("Enter number of students : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Student #%d\n", i + 1);
        printf("ID = ");
        scanf("%d", &id[i]);
        fflush(stdin);

        printf("Name = ");
        scanf("%[^\n]s", &name[i]);
        fflush(stdin);

        printf("Factory = ");
        scanf("%[^\n]s", &factory[i]);
        fflush(stdin);

        printf("GPA = ");
        scanf("%f", &gpa[i]);

        printf("\n");
    }

    printf("- - - - - - - - - - - - -\n");
    showCritical(name, n, gpa, id);

    return 0;
}

void showCritical(char name[100][50], int n, float GPA[100], int id[100]) {
    int i, num = 1;
    for (i = 0; i < n; i++) {
        if (GPA[i] < 2.00) {
            printf("%d) %d %s %.2f\n", num, id[i], name[i], GPA[i]);
            num++;
        }
    }
}
