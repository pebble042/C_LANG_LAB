//struct2.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct date {
		int day;
		int month;
		int year;
	};
	
	typedef struct {
		char name[30];
		int age;
		struct date bday;
	} person;
	
	person std1={"John F. Smith", 20, {25, 1, 88}};
	person std2={};
	
	printf("Enter data of a student\n");
	printf("Name :"); gets(std2.name);
	printf("Age :"); scanf("%d",&std2.age);
	printf("Birthday (dd/mm/yy) : ");
	scanf("%d/%d/%d",&std2.bday.day, &std2.bday.month,&std2.bday.year);
	
	printf("\n\nList all students \n");
	printf("-----------------------------------------------------\n");
	printf(" No. Name                        Age  Birthday\n");
	printf("-----------------------------------------------------\n");
	printf(" 1 %-30s %d  %02d/%02d/%02d\n", std1.name,std1.age,std1.bday.day,std1.bday.month, std1.bday.year);
	printf(" 2 %-30s %d  %02d/%02d/%02d\n", std2.name,std2.age, std2.bday.day,std2.bday.month, std2.bday.year);
	printf("-----------------------------------------------------\n");
	system("PAUSE");
	return 0;
}