#include <stdio.h>

void inputfunc(int &x);

int main()
{
  int a=5;
  inputfunc(a);
  printf("%d",a);
}


void inputfunc(int &a){
a=10;
}



