#include <stdio.h>

#define PRICE 0
#define PAGES 1
#define WEIGHT 2

float Find_max_Price (float books [][5][3]);
float Find_max_Page( float books [][5][3] );
float avgWeight_of_level(int level);

float books[2][5][3] = {    
                                {
                                    {280.50 , 350, 152.5},
                                    {410.00 , 280, 202.5}, 
                                    {1590.75, 406, 858.7},
                                    {296.50 , 310, 102.5},
                                    {1210.50, 450, 952.0}
                                },
                                {
                                    {80.50  , 75 , 45   },
                                    {2015   , 500, 575  },
                                    {120    , 25 , 30.75},
                                    {456.50 , 150, 200  },
                                    {110.50 , 50 , 130  }
                                }};

int i, j, k;

int main(){

    float max_price, max_pages, avg_weight_level;
    int level;

    printf("Enter your level: ");
    scanf("%d",&level);

    max_price = Find_max_Price (books);
    printf("Max price = %.2f\n",max_price);

    max_pages = Find_max_Page (books);
    printf("Max pages = %.0f\n",max_pages);

    avg_weight_level = avgWeight_of_level(level);
    printf("Average Weight of level = %.2f", avg_weight_level);
    
    return 0;
}

float Find_max_Price (float books [][5][3]){
    float max_price = books[0][0][PRICE];
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 5; j++){
            if (books[i][j][PRICE] > max_price){
                max_price = books[i][j][PRICE];
            }
        }
    }
    return max_price;
}

float Find_max_Page( float books [][5][3] ){
    float max_page = books[0][0][PAGES];
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 5; j++){
            if (books[i][j][PAGES] > max_page){
                max_page = books[i][j][PAGES];
            }
        }
    }
    return max_page;
}

float avgWeight_of_level(int level)
{
    float sum_weight = 0.0, avg_weight;
    for ( i = 0; i < 5; i++){
        sum_weight += books[level][i][WEIGHT];
    }

    avg_weight = sum_weight / 5.0;
    return avg_weight;

}

