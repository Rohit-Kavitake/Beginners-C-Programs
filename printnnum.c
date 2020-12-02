#include<stdio.h>
void printNum(int);
int main(int argc, char const *argv[])
{   
    int num;
    printf("Enter The End number::");
    scanf("%d",&num);
    printNum(num);
    return 0;
}


void printNum(int num){
    if(num>=0)
    {
        printNum(num-1);
        printf("  %d ",num);
    }
}