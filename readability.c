#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    printf("text:");
    int formula;
    int letter=0;
    int word=0;
    int sentence=0;
    string s=get_string("");
 
    
    for(int i=0,n=strlen(s);i<n;i++)
    {
        
       if(isalpha(s[i]))  
       {
       letter++;
       }
       
    }
    
    for(int i=0,n=strlen(s);i<n;i++)
    {
        if(isblank(s[i]))
       {
           word++;
       }
    }
    for(int i=0,n=strlen(s);i<n;i++)
    {
        if(s[i]=='.'||s[i]=='?'||s[i]=='!')
        {
            sentence++;
        }
    }
    
    formula=0.0588 * (letter*100/word) - 0.296 * (sentence*100/word) - 15.8;
    if(1<=formula&&formula<16)
    {
    printf("Grade: %i\n",formula);
    }
    else if(formula>16)
    {
    printf("Grade: %i+\n",formula);
    }
    else if(formula<1)
    {
        printf("Grade:Before Grade 1\n");
    }
    printf("letter:%i\n",letter);
    printf("word:%i\n",word+1);
    printf("sentence:%i\n",sentence);
 
    
    
}