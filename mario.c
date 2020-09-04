#include<stdio.h>
#include<cs50.h>

int main(void)
{
int height;

do
{ height=get_int("enter the height:");


}
while(height<1);
for(int i=1;i<height+1;i++)
{
for(int j=1;j<i+1;j++)
{
printf("#");
}
printf("\n");

}
}