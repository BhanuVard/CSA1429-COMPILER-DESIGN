#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000]; 
    int i;
    printf("Enter  the string : ");
    gets(s);
    for(i=0;s[i];i++)  
    {
        if(s[i]>=97 && s[i]<=122)
          printf("\n%c is identifier",s[i]);
        else if(s[i]>=48 && s[i]<=57)
          printf("\n%c is constant",s[i]);
        else
          printf("\n%c is operator",s[i]);
 	}
    return 0;
}
