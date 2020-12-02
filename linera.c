
#include<stdio.h>
int searchlin(int arr[],int x)
{   int i=0;
    for(;i<5;i++)
    {
        if(arr[i]==x)
        {
            return arr[i];

        }
    }
    return(-1);
}
int main()
{
    int arr[5],x,i,result;

    printf("Enter the array elements::");
    for (i=0;i<5;i++)
    {
        scanf(" %d",&arr[i]);
    }

    printf("Enter the element to search::");
    scanf(" %d",&x);

    result=searchlin(arr,x);

    if(result==-1)
    {
        printf("Error The element is not present in the array");

    }
    else
    {
        printf("The elemnt is found at the %d position",result);
    }
    
    return 0;
}
