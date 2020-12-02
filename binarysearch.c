//program to implement binary search
#include<stdio.h>
#include<conio.h>
int binarysearch(int array[],int x,int low,int high)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(array[mid]==x)
			return mid;
		if(array[mid]<x)
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}
int main()
{
	int i,n,result,x,array[5];
	//clrscr();
	printf("Enter 5 array elemnts : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter number to be searched : ");
	scanf("%d",&x);
	n=sizeof(array)/sizeof(array[0]);
	result=binarysearch(array,x,0,n-1);
	if(result==-1)
		printf("\nNot found");
	else
		printf("Element is found at index %d",result);
	//getch();
	return 0;
}