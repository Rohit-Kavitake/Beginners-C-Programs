
#include <stdio.h>
#include <stdlib.h>

void fibo(int x)
{   static int a=1,b=2,c;
    if(x>2)
    {
        printf("%d\t",a);
        c= a+b;
        a=b;
        b=c;
        fibo(x-1);
    }
}

int main() 
{
    int nTerms=0;
    printf("enter the number of terms to be displyed::");
    scanf("%d",&nTerms);
    printf("0  1\t");
    fibo(nTerms);
    return 0;
}
