#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n;
	int *a,i,sum=0,num=0;
	//clrscr();
	printf("Enter the no of elements");
	scanf("%d",&n);

	a=(int*)calloc(n,sizeof(int));

	if(a==NULL)
	printf("\nUnable to alocate memory");
	else
	{
	     printf("\nEnter the elements");
	     for(i=0;i<n;i++)
	     {
		scanf("%d",a+i);
	     }
	}

	printf("\nArray elements are");
	for(i=0;i<n;i++)
	{

		printf("%d\n",*(a+i));

		sum=sum+(*(a+i));
	}

	//printf("\nSum of all element=%d",sum);

	for(i=1;i<n;i++)
	{

		if(*a < *(a+i))
		{
			*a= *(a+i);
		}

	}

	printf("\nLargest element=%d",*a);

	free(a);
	//getch();
  }