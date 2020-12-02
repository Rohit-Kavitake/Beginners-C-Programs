#include<stdio.h>
#include<stdlib.h>
int countDigits(int);
int main(int argc, char const *argv[])
{
    int num;
    int count=0;
     
    printf("Enter a number: ");
    scanf("%d",&num);
     
    count=countDigits(num);
     
    printf("Total digits in number %d is: %d\n",num,count);
     
    return 0;
}
int countDigits(int num)
{
    static int count=0;
     
    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
