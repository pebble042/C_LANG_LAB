#include <math.h>
#include <stdio.h>
char grading(float score) {
    char grade;

    if (score >= 80) {
        grade = 'A';
    } else if (score >= 70) {
        grade = 'B';
    } else if (score >= 60) {
        grade = 'C';
    } else if (score >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    return grade;
}

int main() {
    float score;
    printf("Enter your score: ");
    scanf("%f", &score);
    if (score > 100 || score < 0) {
        printf("Invalid grade.\n");
    } else {
        printf("Your grade = %c", grading(score));
    }
    return 0;
}