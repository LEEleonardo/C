#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void rspfunc();     //input을 따로하는경우 어떻게 while을 돌리는가요
int main(){
    rspfunc();
    return 0;
}
void rspfunc(){
    int draw=0;
    int win=0;
  while(1){
    int n_input;
    printf("\n바위는 1, 가위는 2, 보는3 입니다. 뭘 내시겠어요? : ");
    scanf("%d",&n_input);
    srand(time(NULL));
    int random=rand()%3+1;
    if(n_input==1){
       printf("당신은 가위 선택.");
    }
    if(n_input==2){
       printf("당신은 바위 선택.");
    }
    if(n_input==3){
       printf("당신은 보 선택.");
    }
    if(random==1){
       printf("컴퓨터는 가위 선택.");
    }
    else if(random==2){
        printf("컴퓨터는 바위 선택");
    }
    else if(random==3){
        printf("컴퓨터는 보 선택");
    }
    if(n_input-random==0){
        printf(" : 비겼습니다.\n");
        draw++;
    }
    else if(n_input-random==1||n_input-random==(-2)){
        printf(" : 이겼습니다.\n");
        win++;
    }
    else if(n_input-random==(-1)||n_input-random==2){
        printf(" : 졌습니다.\n게임결과 %d승 %d무",win,draw);
        break;
    }
    else{
        printf("제대로 입력하세요");
        break;
    
    }

  }
}












