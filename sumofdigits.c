#include<stdio.h>
int digiSum(int);
int main(int argc, char const *argv[])
{
    int num,sum;
    printf("Enter the number::");
    scanf("%d",&num);
    sum = digiSum(num);
    printf("The sum of digits of the %d is:: %d",num,sum);
    return 0;
}

int digiSum(int num)
{
    static int sum = 0;
    int rem=0;
    rem = num%10;
    sum+=rem;
    
    if(rem!=0)
    {
        digiSum(num/10);
    }
    else
    {
        return sum;
        
    }
    

}