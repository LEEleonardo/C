#include <stdio.h>

void inputfunc(int *age,int *number);
void returnprice(int n_age, int n_number);
int main(){
    int n_Age,n_Number;
    int* age=&n_Age;
    int* number=&n_Number;
    inputfunc(age,number);
    returnprice(n_Age,n_Number);
    return 0;
}

void inputfunc(int *age,int *number){
printf("입장객의 나이를 입력하세요 : ");
scanf("%d",age);
printf("입장객의 수를 입력하세요 : ");
scanf("%d",number);
}


void returnprice(int n_age, int n_number){
    int entryprice;
    int saleprice=0;
    int lastprice;
    
    if(n_age>=1&&n_age<=7){
        entryprice=2000;
    }
    else if(n_age>7&&n_age<14){
        entryprice=1500;
    }
    else if(n_age>13&&n_age<20){
        entryprice=2000;
    }
    else if(n_age>19&&n_age<65){
        entryprice=4000;
    }
    else if(n_age>64){
        entryprice=1500;
    }
    else{
    printf("제대로 입력해 주세요");
    //return 0;이거 그냥 종료시키는 함수가 뭐가 있나요??
    }

    if(n_number>=15){
    entryprice=2000;
    saleprice=n_number*entryprice*0.15;
    }
    
    lastprice=entryprice*n_number-saleprice;
    
   printf("입장료 : %d\n",entryprice);
   printf("할인금액 : %d\n",saleprice);
   printf("결제금액 : %d",lastprice);

}

















