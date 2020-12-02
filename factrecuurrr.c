#include<conio.h>
#include<stdio.h>
int factNum(int x)
{
    if(x==0)
        return 1;
    else if (x>0)
    {
        return x*factNum(x-1);
    }
    else
    {
        return 1;
    }
    
}
int main(int argc, char const *argv[])
{
    int num,fact;
    printf("Enter the Number::");
    scanf(" %d",&num);
    fact = factNum(num);
    printf("The Factorial of given num is:: %d",fact);
    return 0;
}


