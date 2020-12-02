#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char string1[20], string2[20],string3[]="A_56_", string4[20];

    printf("Enter first String::");
    fgets(string1,20,stdin);
    printf("Enter Second String::");
    fgets(string2,20,stdin);
    printf("The Length of First string is = %d",strlen(string1)-1);
    printf("\nThe Length of Second string is = %d",strlen(string2)-1);
    if(strcmp(string1,string2)==0)
    {
        printf("\nString one and Two are same");
    }
    else
    {
        printf("\nString one and Two are Not same");
    }
    //concatinating third and first string
    printf("\nconcatinating third and first string we get:: %s",strcat(string3,string1));
    strcpy(string4,string1);
    printf("The first string copied to fourth string variable:: %s",string4);
    return 0;
}
