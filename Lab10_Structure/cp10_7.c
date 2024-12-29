#include <stdio.h>
#include <string.h>
#define MAX 4

typedef struct {
    char stcode[10];
    char name[30];
    float gpa;
    char status[15];
} student;


void showStudent(student arrSt[]);
void setStatus(student arrSt[]);
student minGPA(student arrST[] );
double avgCriticalGPA(student arrST[]);
int countFailStudent(student arrST[]);

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
    printf("The student with the lowest GPA is %s GPA=%.2f", mGPA.name, mGPA.gpa);
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
	printf("-----------------------------------------------------------------------");
	printf("\nStudents with new status\n");
	printf("-----------------------------------------------------------------------\n");
	showStudent(allSt);
	
	student mGPA = minGPA(allSt);
	printf("\nStudent lowest GPA is [%s] Lowest GPA is [%.2f]\n", mGPA.name, mGPA.gpa);

	float avgCriStd = avgCriticalGPA(allSt);
	if (avgCriStd != 0){
		printf("the average of all students with Critical status = [%.2f]\n", avgCriStd);
	}
	else{
		printf("There are no students with Critical status.\n");
	}
	
	int numFail = countFailStudent(allSt);
	printf("Number of students with FAIL status = [%d]\n", numFail);
	// system("PAUSE");
	return 0;
}

void showStudent(student arrSt[]){
    int i;
    for(i=0;i<MAX;i++){
        printf("%s %-20s GPA=%.2f status=%s\n",arrSt[i].stcode,arrSt[i].name, arrSt[i].gpa, arrSt[i].status );
    }
	printf("-----------------------------------------------------------------------");

}

void setStatus(student arrSt[]){
    int i;

	for ( i = 0; i < MAX; i++){
        if(arrSt[i].gpa>=3.50) strcpy(arrSt[i].status,"EXCELENT");
        else if(arrSt[i].gpa>=2.00) strcpy(arrSt[i].status,"PASS");
        else if(arrSt[i].gpa>=1.5) strcpy(arrSt[i].status,"CRITICAL");
        else strcpy(arrSt[i].status,"FAIL");
    }
}

// Function to find students with the lowest GPA
student minGPA(student arrST[] ){
	int i;
	student stdMinGPA;
	float min;
	min = arrST[0].gpa;

	for ( i = 0; i < MAX; i++){
        if( arrST[i].gpa < min){
			stdMinGPA = arrST[i];
		} 
	}
	return stdMinGPA;
}

// The function finds the average of all students with Critical status.
double avgCriticalGPA(student arrST[]){
	int i;
	float result, n = 0.0, sum = 0.0;
	for ( i = 0; i < MAX; i++){
		if (arrST[i].gpa >= 1.5 && arrST[i].gpa < 2.00){
			sum += arrST[i].gpa;
			n++;
		}
	}

	if (n != 0){
		result = sum/n;
	}
	else{
		result = 0;
	}

	return result;
}

// Function to count the number of students with FAIL status
int countFailStudent(student arrST[]){
	int i, n = 0;
	for ( i = 0; i < MAX; i++){
		if (arrST[i].gpa < 1.5){
			n++;
		}
	}
	return n;
}