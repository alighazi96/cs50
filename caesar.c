#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,string argv[])
{
    if(argc != 2 )
    {printf("Usage: ./caesar key\n");
    return 1;
    }
    
    int key = atoi(argv[1]);
    
    string plaintext = get_string("plaintext: ");
    
    printf("chipertext: ");
    for(int i=0,n = strlen(plaintext);i < n;i++)
    {
       char c=plaintext[i];
    
        if(isalpha(c))
        {
            char m ='A';
            if(islower(c))
                m='a';
            printf("%c\n",(c - m + key)%26 + m);    
        }
        else
        {
            printf("%c",c);
        }
    }
    

} 
    