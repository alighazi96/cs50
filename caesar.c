#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
bool is_valid_key(string s);


int main(int argc,string argv[])
{
    if(argc != 2|| !is_valid_key(argv[1]))
    {printf("Usage: ./caesar key");
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
            printf("%c",(c - m + key)%26 + m);    
        }
        else
        {
            printf("%c",c);
        }
    }
    

} 

bool is_valid_key(string s)
{
    for(int i = 0;i<strlen(s) ;i++)
    {
        char ch =s[i];
       if(!isdigit(ch))
     {
         return false;
     }
    }    
    return true;         
}
    