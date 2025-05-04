#include <stdio.h>

int main() {

    int start ,end;
    scanf("%d %d",&start,&end);
    int duration;

    if(start==end){
        duration=24;
    }
    else if(start>end){
        duration=24+end-start;
    }
    else{
        duration=end-start;
    }
    printf("O JOGO DUROU %d HORA(S)\n",duration);
    return 0;
}
