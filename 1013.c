#include<stdio.h>
#include<stdlib.h>

int main(){

    int A,B,C,result;
    scanf("%d %d %d",&A,&B,&C);
    int Maior_AB=(A+B+abs(A-B))/2;
    result=(Maior_AB+C+abs(Maior_AB-C))/2;
    printf("%d eh o maior\n",result);

    return 0;
}
