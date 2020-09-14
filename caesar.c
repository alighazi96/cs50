#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int key =atoi(argv[1]);
    
    string plaintext = get_string("plaintext:");
    
    printf("ciphertext:");
    
    for(int i = 0,n = strlen(plaintext);i < n;i++)
    {
        char c = plaintext[i];
        if(isalpha(c))
        {
            char m = 'A';
            if(islower(c))
            {
                m='a';
                printf("%c",(c - m + key) % 26 +m);
            }
            else
            {
            printf("%c\n",c);
            }
        }
    }
    
    
}