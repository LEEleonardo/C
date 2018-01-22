#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void updownfunc(int random);
int randomvalue();

int main()
{
    int random=randomvalue();
    updownfunc(random);    
    return 0;
}


int randomvalue()
{

    srand(time(NULL));
    int random=rand()%100;
    printf("%d\n숫자가 나왔습니다",random);
    return random;
}

void updownfunc(int random)
{
        int input;
        int val1=0;
        int val2=100;
        for(int i=0;i<5;i++){
        printf("숫자를 입력하세요:");
        scanf("%d",&input);
        if(input<random){   //랜덤값이 입력값보다 큰경우
            val1=input;
            printf("%d보다는크고 %d보다는 작습니다.",val1,val2);
        }
        else if(input>random){
            val2=input;
            printf("%d보다는 크고 %d보다는 작습니다.",val1,val2);
        }
        else if(input==random){
            printf("축하합니다.당신은 %d번째 맞추셨습니다.",i+1);
            break;
        }
        else{
            printf("1부터100이하의 정수를 넣어주세요!");
        }
        }
}
