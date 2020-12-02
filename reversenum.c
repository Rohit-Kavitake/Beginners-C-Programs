//Author:- Rohit Kavitake

#include<stdio.h>
#include<stdlib.h>
int reversenum(int num)
{   static int rev=0;
    int rem;
    if(num>0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        reversenum(num/10);    
    }
    else
    {
        return rev;
    }
    return rev;
}

int main(int argc, char const *argv[])
{
    int num,reverse;
    printf("Enter The number::");
    scanf("%d",&num);
    reverse = reversenum(num);
    printf("The Reverse of the number is :: %d",reverse);
    return 0;
}
