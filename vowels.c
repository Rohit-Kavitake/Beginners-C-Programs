//Author:- Rohit Kavitake

#include<stdio.h>
#include<stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int  voiw=0,e=0,i=0,X=0;
    char str[100];
    printf("Start");
    printf("\nEnter the String::");
    fgets(str,100,stdin);
    e = strlen(str);
    for(i=0;i<e;i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u' )
        {
            voiw++;
        }
    }
    printf("The Length of the string is:: %d \n",e-1);
    if(voiw>0)
    {   
        
        printf("The Number of Vowels in the string are :: %d \n",voiw);

    }
    else
    {
        printf("There are No VOWELS IN THE STRING \n");
        X = ((e-1)/2);
        printf("The middle character of the String is \"%c\" \n",str[X]);
        
    }
    
    return 0;
}
