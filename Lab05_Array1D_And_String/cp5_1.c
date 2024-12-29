#include <stdio.h>
#define n 10
int main(){

    int i, numbers[n], reverse_nums[n];

    printf("Enter %d numbers : ",n);
    for ( i = 0; i < n; i++){
        scanf("%d",&numbers[i]);
    }
    
    // Type 1
    // int j;
    // for ( i = 0,j = n-1; i < n, j >= 0 ; i++, j--){
    //     reverse_nums[j] = numbers[i];
    // }

    // Type 2
    int j = n - 1;
    for ( i = 0; i < n; i++){
        if (j >= 0){
            reverse_nums[j] = numbers[i];
            j--;
        }
    }
    
    
    for ( i = 0; i < 10; i++){
        printf("%d ",reverse_nums[i]);
    }
    
    return 0;
}