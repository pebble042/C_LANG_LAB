//struct2.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	typedef struct {
		int day;
		int month;
		int year;
	}date;
	
	typedef struct {
		char name[30];
		int age;
		date bday;
		float gpa;
	} person;
	
	person std1={"John F. Smith", 20, {25, 1, 88}, 3.21};
	person std2={"Peter Wong", 19, {12, 8, 89}, 3.5};
	person std3={ };
	
	printf("Enter data of a student\n");
	printf("Name :"); gets(std3.name);
	printf("Age :"); scanf("%d",&std3.age);
	printf("Birthday (dd/mm/yy) : ");
	scanf("%d/%d/%d",&std3.bday.day, &std3.bday.month,&std3.bday.year);
	printf("GPA :"); scanf("%f",&std3.gpa);
	
	printf("\n\nList all students \n");
	printf("-------------------------------------------------------\n");
	printf(" No. Name                        Age   Birthday    GPA\n");
	printf("-------------------------------------------------------\n");
	printf(" 1 %-30s %d   %02d/%02d/%02d   %.2f\n", std1.name,std1.age,std1.bday.day,std1.bday.month, std1.bday.year, std1.gpa);
	printf(" 2 %-30s %d   %02d/%02d/%02d   %.2f\n", std2.name,std2.age, std2.bday.day,std2.bday.month, std2.bday.year, std2.gpa);
	printf(" 3 %-30s %d   %02d/%02d/%02d   %.2f\n", std3.name,std2.age, std3.bday.day,std3.bday.month, std3.bday.year, std3.gpa);

	printf("-------------------------------------------------------\n");
	system("PAUSE");
	return 0;
}