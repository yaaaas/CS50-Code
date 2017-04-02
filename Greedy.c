#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    printf("O hai! How much change is owed?\n");
    float changef = get_float();
    
    while(changef < 0)
    {
    printf("O hai! How much change is owed?\n");
    changef = get_float();   
    }
    
    
    int change = round(changef * 100);
    
    int penny = 0;
    while ((change - 25) >= 0){   
        change = change - 25;
        penny++;
    }
    
    int ten = 0;
    while ((change - 10) >= 0){
        change = change - 10;
        ten = ten + 1;
    }
    
    int five = 0;
    while ((change - 5) >= 0){
        change = change - 5;
        penny = penny + 1;
    }
    
    int one = 0;
    while ((change - 1) >= 0){
        change = change - 1;
        one = one + 1;
    }
    
    printf("%i\n", one + five + ten + penny);

}
