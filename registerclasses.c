#include<stdio.h>

int main(int argc, char const *argv[])
{   int i=0;
    int a=12; //auto storage
    register int r; // variable a is allocated memory in the CPU register. The initial default value of a is 0. 
    //extern int e; // variable a is defined globally, the memory will not be allocated to a
    for(;i<7;i++)
    {
        static int s=0;
        printf("\nauto variable value:: %d",a);
        printf("\nregister variable value:: %d ",r);
        //printf(" extern variable value:: %d",e);
        printf("\nstatic variable value:: %d",s);
        s++;
        //e++;
        a++;
        r++;

    }
    return 0;
}
