#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int seriesSum(int);

int main() {

    int n,sum=0;
    printf("Enter the Number::");
    scanf(" %d",&n);
    sum = seriesSum(n);
    printf(" The Sum of the series is ::%d",sum);
    return 0;
}

int seriesSum( int n){
    if (n>0){
    return(n+seriesSum(n-1));}
}