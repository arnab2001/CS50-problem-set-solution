#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float change;
    do
    {
        change = get_float("enter amount");
    } while (change <= 0);
    
    int coins =0 ;
    int cents = round(change*100);
    while (cents >= 25)
    {
        coins ++;
        cents = cents-25;
    }
    while (cents >= 10)
    {
        coins ++;
        cents = (cents-10);
    }    
    while (cents >= 5)
    {
        coins++;
        cents = (cents-5);
        
    }
    while (cents >=1)
    {
        coins ++;
        cents = (cents-1);
    }
    
    printf("%i\n",coins);
}





















































