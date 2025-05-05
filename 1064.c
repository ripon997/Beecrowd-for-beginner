#include <stdio.h>

int main() {
    float number,sum=0.0;
    int i,count=0;
    for(i=0;i<6;i++){
        scanf("%f",&number);
        if(number>0){
            count++;
        sum+=number;

        }
    }
    float average;
    average = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);

    return 0;
}

