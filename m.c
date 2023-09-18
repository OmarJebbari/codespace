#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  int sum = 0;

  for ( int i = 0 ; i < 9 ; i++)
   {
     sum = array[i] + array[i+1];
     sum

   }
   printf("sum = %d",sum);


}