#include <cs50.h>
#include <stdio.h>


int get_pos_int(string prompt);


int main(void)
{
    int n = get_pos_int("Enter a +ve number between 1 and 8:");
    for (int h=0;h<n;h++)
    {
        for(int sp = n-h;sp>1;sp--)
        {
            printf(" ");

        }
        for (int hash=0;hash<=h;hash++)
        {
            printf("#");
     
        }

        printf("\n");
    }

}




int get_pos_int(string prompt)

{
    int n;
    do
    {
        n = get_int("%s" ,prompt);
    }
    while (n < 1 || n > 8);
    return n; //
}


