-------- Objective C ----------

#include <stdio.h>
#include <cs50.h>


int main (void)
{
    int minutes;
    printf( "Minutes: ");
    minutes = get_int();
    
    while (minutes < 0 )
    {
        printf("That is an invalid input\n");
        printf("Minutes: ");
        minutes = get_int();
    }
    
    printf("Bottles: %i\n", minutes*12);
          
}

-------- Python ---------
   
print('Minutes: ', end='');
x = int(input());

while(x<0):
  print("That is an invalid input")
  print('Minutes: ', end='');
  x = int(input());

print("Bottles: " + str(x*12));
