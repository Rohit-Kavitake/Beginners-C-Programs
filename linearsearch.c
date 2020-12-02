//program to implement linear search
#include<stdio.h>
#include<conio.h>
int search(int array[],int x)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(array[i]==x)
		return i;
	}
	return -1;
}
int main()
{
	int array[5],x,i,result;
	//clrscr();
	printf("Enter 5 array elements : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter number to be searched :");
	scanf("%d",&x);
	result=search(array,x);
	if(result==-1)
		printf("\nElemnt not found");
	else
		printf("\nElement %d is found at index %d",x,result);
	//getch();
	return 0;
}