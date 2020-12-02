#include<conio.h>
#include<stdio.h>
#define isUpper(ch) (ch>='A' && ch <='Z')
#define isLower(ch) (ch>='a' && ch <='z')
#define isNumeric(ch) (ch>='0' && ch<='9')

int main(int argc, char const *argv[])
{
    int a,b,i;
    char c;
    printf(" Enter a Character::");
    scanf(" %c",&c);
    if(isLower(c))
    {
        printf("The Entered Character is Lowercase");
    }
    else if(isUpper(c))
    {
        printf("The Enered Character is Uppercase");
    }
    else if(isNumeric(c))
    {
        printf("The Enered Character is Number");
    }
    else
    {
        printf("Please enter appropriate input");
        
    }
    return 0;
}

