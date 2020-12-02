#include <stdio.h>
 #include<stdlib.h>
int add(int x, int y)
{
	return x+y; 	
} 		
int sub(int x, int y) 	
{ 		
	return x-y; 	
} 	
int mul(int x, int y)	
{	    
	return x*y;	
}	
int main( ) 
{ 	    
	int ch;		
int (*fp[])(int,int)={add,sub,mul}; 		
while(1)
{
printf("\n0.ADD \n1.SUB \n2.Multiply\nEnter your choice");

scanf("\n%d",&ch);		
if(ch>2)		
exit(0);		

int s = (fp[ch])(10, 15);		
printf("\nResult is %d", s);	
}

return 0; 	
}