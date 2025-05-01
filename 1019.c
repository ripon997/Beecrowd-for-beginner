#include<stdio.h>

int main(){

    int total_second;
    int hour,minute,second;

    scanf("%d",&total_second);

    hour = total_second/3600;
    total_second %= 3600;

    minute = total_second/60;
    total_second %= 60;

    second= total_second;

    printf("%d:%d:%d\n",hour,minute,second);

    return 0;
}
