#include <stdio.h>
#define N_MONTH 3
int main(){

    int first_day_of_month, n_day_each_month[3];
    int i, j, date, month;

    printf("Day of the week of the first month: ");
    scanf("%d",&first_day_of_month);

    printf("Number of days of each month: ");
    for ( i = 0; i < N_MONTH; i++){
        scanf("%d",&n_day_each_month[i]);
    }
    
    int days; 
    int start_pos = first_day_of_month;

    for (month = 0; month < N_MONTH; month++) { 
        days = n_day_each_month[month];

        for (j = 1; j < start_pos; j++){
            printf("   ");
        }
             
        for (date = 1; date <= days; date++) { 

            printf("%3d", date); 
            if (++j > 7) { 
                j = 1; 
                printf("\n"); 
            } 
        } 

        if (j) {
            printf("\n"); 
        }
        start_pos = j; 
    } 

    return 0;
}