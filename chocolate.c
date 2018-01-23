#include <stdio.h>
#define grampermoney 800
int chocoInput();
void calBill(int gram);

int main(){
    int gram=chocoInput();
    calBill(gram);
    return 0;
}


int chocoInput(){
    int n_choco=0;
    int totalgram=0;
    while(n_choco<10){
        int input;
        printf("# 포장할 초콜릿의 무게를 입력하세요(단위 : g ) :");
        scanf("%d",&input);
        if(input<150)
            printf("땅콩이 안 들어 갔나..? 왜이리 가볍지?");
        else if(150<=input&&input<=450){
            n_choco++;
            totalgram+=input;
            printf("**현재 포장된 초콜릿 수 : %d",n_choco);
        }
        else if(input>450)
            printf("초콜릿에 땅콩이 많이 들었나?? 왜리 무겁지??");
        else{
            printf("문자가 입력되었습니다. 숫자만 입력 해 주세요.");
            //문자를 조건으로 거는부분을 모르겠습니다.
        }
        printf("\n");
    }
    printf("\n**초콜릿 포장이 끝났습니다.**");
    return totalgram;
}

void calBill(int gram){
    int bill;
    if(gram%100<50){
    bill=(gram/100)*grampermoney;
    }
    else{
    bill=(gram/100)*grampermoney+400;
    }
    printf("\n초콜릿의 총 무게는 %d이구요 가격은 %d 입니다.",gram,bill);
}


