#include <stdio.h>

int main() {
    int number;
    int i,count=0;
    for(i=0;i<5;i++){
        scanf("%d",&number);
        if(number%2==0){
            count++;
        }
    }

    printf("%d valores pares\n",count);

    return 0;
}
