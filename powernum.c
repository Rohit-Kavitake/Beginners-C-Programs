//Author:- Rohit Kavitake

#include<stdio.h>
#include<stdlib.h>

int powernum(int base, int index)
{   static int result=1;
    if(index>0)
    {
        result=result*base;
        powernum(base,index-1);
    }
    else
    {
        return result;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int base,index,result;
    printf("Enter the base number::");
    scanf("%d",&base);
    printf("Enter the index::");
    scanf("%d",&index);
    result = powernum(base,index);
    printf("The %d^%d = %d",base,index,result);
    return 0;
}
