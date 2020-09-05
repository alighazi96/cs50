#include<stdio.h>
#include <string.h>


int main(void)
{
    long credit_number;
    
    do
    {
        printf("enter the credit number: ");
        scanf("%ld",&credit_number);
        
    }while(credit_number<=0);
    
    long workingcc = credit_number;
    int sum=0;
    int count=0;
    long divisor=10;
        char result[11];

    
    //first case
    while(workingcc>0)
    {
        int last_digit=workingcc%10;
        sum=sum+last_digit;
        workingcc=workingcc/100;
    }
    
    //second case
     workingcc=credit_number/10;
     while(workingcc>0)
    {
        int last_digit=workingcc%10;
        int mult2=last_digit*2;
        sum=sum+(mult2%10)+(mult2/10);
        workingcc=workingcc/100;
    }
    //length of number/digit counter
    workingcc = credit_number;
    while(workingcc!=0)
    {
        workingcc=workingcc/10;
        count++;
    }
     //divisor
     for(int i=0;i<count-2;i++)
     {
         
         divisor=divisor*10;
         
     }
     int firstdigit=credit_number/divisor;
     int first2digit=credit_number/(divisor/10);
     //final check
    if(sum%10==0)
    {
     if(firstdigit==4&&(count==13||count==16))
     {
            printf("VISA\n");
     }
     else if((first2digit==34||first2digit==37)&&count==15)
     {
            printf("AMEX\n");
     }
     else if((50<first2digit&&first2digit<56)&&count==16)
     {
                     printf("MASTERCARD\n");

     }
     else
     {
                        printf("INVALID\n");

     }
    }
    
     else
     {
            printf("INVALID\n");
     }

     
     
 
     
}
