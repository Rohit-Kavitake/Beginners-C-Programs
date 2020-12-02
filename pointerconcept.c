#include<stdio.h>

int main(int argc, char const *argv[])
{
    int var=786,i=0;
    int *ptr1;
    int **ptr2;
    int arr[5]={1,2,3,4,5};
    int *ptr3 = arr;
    ptr1 = &var;
    ptr2 = &ptr1;
    //ptr3 = &arr;
    printf("\nvalue of variable = %d",var);
    printf("\nvalue of variable using single pointer= %d",*ptr1);
    printf("\nvalue of single pointer = %d",ptr1);
    printf("\nvalue of variable using doule pointer = %d",**ptr2);
    printf("\nvalue of pointer to pointer = %d",ptr2);
    printf("\nprinting array elements using pointer to array::\n");
    while (i<5)
    {
        printf("%d ",ptr3[i]);
        i++;
    }
    
    return 0;
}
