#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main()

{
    long credit;
    long clone_credit;
    int totalsum = 0;
    int pos = 0;
    int total_len = 0;


    do
    {
        credit = get_long("ENter");
        clone_credit = credit;

        while (credit != 0)
        {

            if(pos%2 != 0) //to check if the number is odd

            {
                int temp = 2 * (credit % 10);
                if (temp > 9 )
                {
                    
                    totalsum += (temp%10 + temp/10);//if its a two dijit num then % to 2nd dig and /10 for fisrt dig
                    
                }
                else
                {
                    
                    totalsum += temp; //totalsum += 2*(credit % 10);if its odd then it will double it
                }
                
                
                



            }
            
            else
            
            {
                totalsum += credit % 10;// even mumber
            }
            credit = credit/10;
            pos++;
            total_len++;


        }





    }
    while (credit != 0);






    if (totalsum % 10 == 0)
     //American Express uses 15-digit numbers
     //MasterCard uses 16-digit numbers
     //Visa uses 13- and 16-digit numbers
     //




    {
        long master_card_1 = clone_credit / 100000000000000;
        long amex_1 = clone_credit / 10000000000000;
        long visa_1 = clone_credit / 1000000000000;
        //check for amex
        if ((amex_1 == 34 || amex_1 == 37) && total_len == 15)
        {
            printf("AMEX\n");
            return 0;
        }
        //check for masterkard
        if((total_len == 16 || total_len == 13) && (master_card_1 >= 51 && master_card_1<=55))
        {
            
            printf("MASTERCARD\n");
            return 0;
        }

        //check for visa
        if ((total_len == 16 || total_len == 13) && (visa_1 == 4 || master_card_1 / 10 == 4))
        {
            printf("VISA\n");
            return 0;
        }

        printf("INVALID\n");

    }
    else
    {
        printf("INVALID\n");
    }
}