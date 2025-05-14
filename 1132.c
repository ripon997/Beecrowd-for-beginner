#include<stdio.h>

int main(){

 int X,Y,sum=0;
 int temp;
 scanf("%d %d",&X,&Y);
 if(X<Y){
    temp =X;
    X=Y;
    Y=temp;
 }
 for(int i=Y;i<=X;i++){
    if(i%13!=0){
        sum+=i;
    }
 }
    printf("%d\n",sum);
 return 0;
}
