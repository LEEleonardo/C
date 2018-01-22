#include <stdio.h>
#include <stdlib.h>
void inputnum(int* input1,int* input2); //리턴 한번에 두개하기
void sub(int input1,int input2);

int main(void){
    int n_input1,n_input2;
    int* input1=&n_input1;
    int* input2=&n_input2;
    inputnum(input1,input2);
    sub(n_input1,n_input2);
    return 0;

}

void inputnum(int* input1,int* input2){
    printf("#두개의 정수를 입력하세요 : ");
    scanf("%d %d",input1,input2);
}


void sub(int input1,int input2){    //정수시 stop하기
    int result;
    int bigger;
    int smaller;
    if(input1<input2){
        bigger=input2;
        smaller=input1;
        result=input2-input1;
    }
    else if(input2<=input1) {
        bigger=input1;
        smaller=input2;
        result=input1-input2;
    }
    else{
        exit(0);
    }
    printf("%d-%d=%d",bigger,smaller,result);
}

