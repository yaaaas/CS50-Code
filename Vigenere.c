---- Objective C -------
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
     
int main(int argc, string argv[]){
    
    
     //Ensuring that only one word is used for the key for this program   
    if(argc != 2 ){
        //Exiting the program if conditiions are not not met
        printf("please make sure command is letter only. Please no numbers or special characters!\n");
        return 1;
    }
    //declaring variable x to use later on to check the string length
    int x = strlen(argv[1]);
    
    //CHecking that key is purely alphabetical
    for (int j=0;j<x; j++)
    {
        if(!isalpha(argv[1][j]))
        {
            //Exiting the program if conditiions are not not met
            printf("please make sure command is letter only. Please no numbers or special characters!\n");
            return 1;
        }
    }
    //Printing out some text to tell the user what  to input
    printf("plaintext: ");
    string plaintext = get_string();
    printf("ciphertext: ");
    
    //Setting up the loop and variable S to compensate for spaces and other non alphanumeric characters
    int s = 0;
    for(int i = 0; i < strlen(plaintext) ; i++){
        
        
        if(!isalpha(plaintext[i])){
            s++;
        }
        int n = (i - s)%(x);
        int key = (toupper(argv[1][n])-65)%26;
            
        //Setting up the loop and accountint for upper and lower case characters respectively by subtracting their respective ASCII values
        if(isupper(plaintext[i])){
            char letter = (plaintext[i] -65 + key)%26 + 65;
            printf("%c", letter);
        }
        else if(islower(plaintext[i])){
            char letter =(plaintext[i] -97 + key)%26 + 97;
            printf("%c", letter);
        }
        else
            printf("%c",plaintext[i]);
    }
    //Printing a new line to ensure it looks nice :)
    printf("\n");
    return 0;
    
}
