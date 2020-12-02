//Author:- Rohit Kavitake

#include <string.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=0,j=0;
    char str1[100],str2[100],str3[3];
    printf("Start...\n");
    printf("Enter !st String::");
    fgets(str1,100,stdin);
    printf("\nEnter 2nd String::");
    fgets(str2,100,stdin);
    printf("%d,%d",strlen(str1),strlen(str2));
    if((strlen(str1)-1)%2!=0)
        str3[0]=str1[((strlen(str1)-1)/2)];
    else
    {
        str3[0]=str1[((strlen(str1)-1)/2)-1];
    }
    
    if((strlen(str2)-1)%2!=0)
        str3[1]=str2[((strlen(str2)-1)/2)];
    else
    {
        str3[1]=str2[((strlen(str2)-1)/2)-1];
    }
    printf("\nThe Third string formed by middle character of input strings is::");
    puts(str3);
    return 0;
}
