#include <stdio.h>
#include <string.h>
void inputchar(char* s_input);
void classifyfunc(char* s_input);

int main(){
    char s_char[100];
    inputchar(s_char);
    classifyfunc(s_char);
}


void inputchar(char* s_input){
    printf("# 영문 문장을 입력하시오 : \n");
    int i = 0;
    while(1){
    scanf("%c",&(s_input[i]));
        if(s_input[i]==26){ //ctrlz조건어떻게 하죠..??
            break;
        }
        i++;
     } 

}


void classifyfunc(char* s_input){

    int n=strlen(s_input);
    int daemunja=0;
    int somunja=0;
    int sutja=0;
    int space=0;
    int other=0;
    for(int i=0;i<n;i++){
        if(48<=s_input[i]&&s_input[i]<=57){
        sutja++;
        }
        else if(65<=s_input[i]&&s_input[i]<=90){
        daemunja++;
        }
        else if(97<=s_input[i]&&s_input[i]<=122){
        somunja++;
        }
        else if(s_input[i]==32||s_input[i]==13||s_input[i]==9){
        space++;
        }
        else{
        other++;
        }
    }
        printf("\n*영문자 대문자 개수 : %d",daemunja);
        printf("\n*영문자 소문자 개수 : %d",somunja);
        printf("\n*숫자 문자 개수 : %d",sutja);
        printf("\n*여백문자(space bar, tab, enter) : %d",space);
        printf("\n*그외 기타문자 개수 : %d",other);
}



