#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int d=a,e=b,f=c;
    int temp=0;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",d,e,f);

    return 0;
}
