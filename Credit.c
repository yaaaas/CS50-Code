#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    //Obtaining the Cardnumbers by using a long long variable type
    long long cardnumber;
    printf("Number: ");
    cardnumber = get_long_long();
    
    //storing the cardnumber in an alternate variable to allow us to use it again 
    long long input = cardnumber;
    
    //Setting up a while loop to reject negative numbers
    while (cardnumber < 0)
    {
    printf("Invalid. Please try again!\n");
    printf("Number: ");
    cardnumber = get_long_long();
    }
    
    //Checking for the number of digits
    long long digits = log10(cardnumber) + 1 ;
    
    //Checking for the number of digits to ensure that a valid number of digits have been entered in
    if(digits != 13 && digits != 15 && digits !=16 ){
        printf("INVALID\n");
        return 0;
    }
    //obtaining the neccesary digits in the card from the 2nd last digit to every other digit
    int othersum = 0;
    for(int i = 0; i < 8 ; i++) {
       int composite = cardnumber % 100;
       int digit = (composite / 10);
       int otherdigit = composite - digit * 10;
       int sdigit = 2 * digit;
       
       if(sdigit > 9){
           sdigit = (sdigit % 10) + 1;
       }
       othersum = othersum + sdigit + otherdigit;
       cardnumber = cardnumber / 100;
       
    }
    
    if(othersum %10 != 0){
        printf("INVALID");
        
        return 0;
    }
    
    long long firstnumbers = 1;
    for(int j = 0; j < digits - 2; j++){
        firstnumbers = firstnumbers*10;
    }
    
    
    long long auth = input / firstnumbers;
    
    
    if ( digits == 15){
        if (auth == 34 || auth == 37)
                printf("AMEX\n");
    }
    
    if ( digits == 16 || digits == 13){
        if (auth == 51 || auth == 52 || auth == 53 || auth == 54 || auth == 55){
            printf("MASTERCARD\n");
        }
                
        
        else if (auth/10 == 4){
            printf("VISA\n");
        }
    }
}
