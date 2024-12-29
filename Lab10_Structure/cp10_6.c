#include <stdio.h>
#include <string.h>
#define MAX 4

typedef struct {
    char stcode[10];
    char name[30];
    float gpa;
    char status[15];
} student;

//show data of 1 student
void showStudent(student st[]);
//function returns the student with status calculated from gpa
void setStatus(student st[]);

int main(){
	student johnny={"101","Johnny One",2.51,"Unknown"};
	student allSt[MAX]=	{	
							johnny,
                        	{"102","Jimmy Two",1.75, "Unknown"},
                        	{"103", "Peter Three", 3.5, "Unknown"},
                        	{"104", "Adam Four", 2.85, "Unknown"}
						};
	int i;
    /*
	printf("Before input data\n");
	showStudent(allSt);
    */

	printf("\nEnter new data\n");
	for(i=0;i<MAX;i++){
		printf("Student#%d\n",i+1);
		printf("Code: "); gets(allSt[i].stcode);
		printf("Name: "); gets(allSt[i].name);
		printf("GPA: "); scanf("%f",&allSt[i].gpa);
		fflush(stdin);
	}
    
    setStatus(allSt);
	printf("\n\nStudents with new status\n");
	showStudent(allSt);
	// system("PAUSE");
	return 0;
}

void showStudent(student st[]){
    int i;
    for(i=0;i<MAX;i++){
        printf("%s %-20s GPA=%.2f status=%s\n",st[i].stcode,st[i].name, st[i].gpa, st[i].status );
    }
	
}

//function returns the student with status calculated from gpa
void setStatus(student st[]){
    int i;

	for ( i = 0; i < MAX; i++){
        if(st[i].gpa>=3.50) strcpy(st[i].status,"EXCELENT");
        else if(st[i].gpa>=2.00) strcpy(st[i].status,"PASS");
        else if(st[i].gpa>=1.5) strcpy(st[i].status,"CRITICAL");
        else strcpy(st[i].status,"FAIL");
    }
}