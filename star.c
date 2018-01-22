#include <stdio.h>

void printfunc(int *ptr);
void inputfunc(int *ptr);

int main(){
    
    int *ptr1;
    int a; 
    ptr1=&a;        //함수안에서 값을 할당하고 사용하려 했지만 오류
    inputfunc(ptr1);
    printfunc(ptr1);
    return 0;
}

void inputfunc(int *ptr){
    printf("# 정수값을 입력하세요 : ");
    scanf("%d",ptr); 
}

void printfunc(int *ptr){
    for(int i = 0 ; i < *ptr;i++){
    if(i%5==0&&i>1){
    printf("\n");
    }
    printf("*");
    }
}
