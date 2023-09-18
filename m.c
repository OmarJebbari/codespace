#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    char*c = get_string("Enter a number : ");

    for (int  i = 0 , i < 10 , i++)
    {
        printf("%c = %c * %i",c , i);
        string = string * i ;
    }
   return 0;

}