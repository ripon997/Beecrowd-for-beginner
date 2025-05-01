#include<stdio.h>

int main(){

    int time,speed;
    double oil;

    scanf("%d",&time);
    scanf("%d",&speed);

    oil = ((double)time * speed) /12;
    printf("%.3lf\n",oil);

    return 0;
}
