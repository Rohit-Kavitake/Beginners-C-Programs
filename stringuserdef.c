//Author:-Rohit Kavitake

#include<stdio.h>
#include<stdlib.h>
int compare(char a[],char b[])  
{  
    int flag=0,i=0;   
    while(a[i]!='\0' &&b[i]!='\0')    
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
int string_length(char s[]) {
   int c = 0;
   while (s[c] != '\0')
      c++;

   return c;
}
void string_add(char string1[], char string2[])
{
    int len1,len2,i;
    len1 = string_length(string1);
    len2 = string_length(string2);
    for(i=0;i<len2; i++)
        {
            string1[len1+i]=string2[i];
        }
        string1[len1+i+1]='\0';
        printf("The concatinated string is:: %s\n",string1);
}
void string_copy(char string1[], char string2[])
{
    int i=0,len1,len2;
    len1 = string_length(string1);
    for(i=0;i<len1;i++)
        string2[i] = string1[i];
    string2[len1]='\0';
    printf("The copied string is:: %s\n",string2);
}
int main(int argc, char const *argv[])
{
    char string1[]="Rohit",string2[]="Kavitake",string3[50];
    printf("Length of string1 is:: %d\n",string_length(string1));
    if(!compare(string1,string2))
        printf("Strings are same(string1 and string2)\n");
    else
        printf("Strings are not same(string1 and string2)\n");
    string_add(string1,string2);
    string_copy(string1,string3);
    return 0;
}
