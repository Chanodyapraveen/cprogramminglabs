#include <stdio.h>
#include <stdlib.h>

int main()
{
     int digit;
    char ch,sh,symbol;
    printf("Enter uppercase letter");
    scanf("%s",&ch);
    printf("Enter lower case letter");
    scanf("%s",&sh);
    printf("Enter digit");
    scanf("%d",&digit);
    printf("Enter specialsymbol");
    scanf("%s",&symbol);
    printf("%s%s%d%s",&ch,&sh,&digit,&symbol);
}
