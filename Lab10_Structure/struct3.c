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
void showStudent(student st);
//function returns the student with status calculated from gpa
student setStatus(student st);

int main()
{
	student johnny={"101","Johnny One",2.51,"Unknown"};
	student allSt[MAX]=	{	
							johnny,
                        	{"102","Jimmy Two",1.75, "Unknown"},
                        	{"103", "Peter Three", 3.5, "Unknown"},
                        	{"104", "Adam Four", 2.85, "Unknown"}
						};
	int i;
	printf("Before input data\n");
	for(i=0;i<MAX;i++) showStudent(allSt[i]);
		printf("\nEnter new data\n");
	for(i=0;i<MAX;i++)
	{
		printf("Student#%d\n",i+1);
		printf("Code: "); gets(allSt[i].stcode);
		printf("Name: "); gets(allSt[i].name);
		printf("GPA: ");  
		fflush(stdin);
	}
	for(i=0;i<MAX;i++)
		allSt[i]=setStatus(allSt[i]);
	printf("\n\nStudents with new status\n");
	for(i=0;i<MAX;i++)
		showStudent(allSt[i]);
	// system("PAUSE");
	return 0;
}

void showStudent(student st)
{
	printf("%s %-20s GPA=%.2f status=%s\n",st.stcode,st.name, st.gpa, st.status );
}

//function returns the student with status calculated from gpa
student setStatus(student st)
{
	student newSt;
	newSt=st; //copy all data from st
	if(newSt.gpa>=3.50) strcpy(newSt.status,"EXCELENT");
	else if(newSt.gpa>=2.00) strcpy(newSt.status,"PASS");
	else if(newSt.gpa>=1.5) strcpy(newSt.status,"CRITICAL");
	else strcpy(newSt.status,"FAIL");
	return newSt; //return student with new status
}