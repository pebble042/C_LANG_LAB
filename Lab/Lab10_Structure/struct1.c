// struct1.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct date {
	int day;
	int month;
	int year;
	} inputdate;
	
	struct date tmpdate;
	printf("Enter data of date(dd/mm/yy):");
	scanf("%d/%d/%d", &inputdate.day, &inputdate.month, &inputdate.year);
	printf("\nYour Input Date is %d/%d/%d \n", inputdate.day,inputdate.month,inputdate.year);
	
	tmpdate=inputdate;
	tmpdate.year++;
	printf("After 1 Year is %d/%d/%d \n", tmpdate.day, tmpdate.month,tmpdate.year);
	
	printf("Now inputdate is %d/%d/%d \n", inputdate.day, inputdate.month,inputdate.year);
	
	system("PAUSE");
	return 0;
}