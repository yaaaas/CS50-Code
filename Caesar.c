#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
                        
int main(int argc, string argv[]){
    
    if(argc != 2){
        printf("Invalid Input\n");
        return 1;
    }
    //converting the argv string input to a integer by using the atoi function
    int key = atoi(argv[1]);
    printf("plaintext: ");
    //Using the get_string() function to obtain the plaintext from the user to be encrypted
    string plaintext = get_string();
    printf("ciphertext: ");
        //Setting up a loop to iterate over each individual character in the argv[1] array
        for(int i = 0; i < strlen(plaintext) ; i++){
    
        if(isupper(plaintext[i])){
            char letter = (plaintext[i] - 65 + key)%26 + 65;
            printf("%c", letter);
        }
        else if(islower(plaintext[i])){
            char letter = (plaintext[i] - 97 + key)%26 + 97;
            printf("%c", letter);
        }
        else
            printf("%c",plaintext[i]);
    }
    printf("\n");
    //Exiting the programing by using the return function :)
    return 0;
    
}
