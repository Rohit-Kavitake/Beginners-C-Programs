#include<stdio.h>
#define isBig(num1,num2) ((num1>num2)? num1 : num2)

int main(int argc, char const *argv[])
{
    int num1,num2,result;
    printf("Enter two numbers::");
    scanf(" %d %d",&num1,&num2);
    result = isBig(num1,num2);
    printf(" %d is the biggest",result);
    return 0;
}
