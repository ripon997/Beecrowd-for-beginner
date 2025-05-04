#include <stdio.h>

int main() {

    int startHour,startMinute;
    int endHour,endMinute;
    int startTotal,endTotal;

    scanf("%d %d %d %d",&startHour,&startMinute,&endHour,&endMinute);
    startTotal = startHour*60+startMinute;
    endTotal=endHour*60+endMinute;
    if(startTotal>=endTotal){
        endTotal+=24*60;
    }
    int totalduration,totalHour,totalMinute;
    totalduration=endTotal-startTotal;
    totalHour=totalduration/60;
    totalMinute=totalduration%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",totalHour,totalMinute);
    return 0;
}
