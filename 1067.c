#include <stdio.h>

int main() {

    int X;
    scanf("%d",&X);
    int i=1;
    for(i;i<=X;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    return 0;
}
