#include <stdio.h>
#include <string.h>
void inputfunc(char *s);
void showString(char *output);
int main()    
{
    char s[100];
    inputfunc(s);
    showString(s);
}


void inputfunc(char *s)
{
   printf("문자열 입력 : ");
   char input[100];
   scanf("%s",input);
   int n  = strlen(input)/2;
   for(int i=0;i<n;i++)
   {
    s[i]=input[i];
   }
}

void showString(char *output)
{
    printf("[   %s..]",output);
}
