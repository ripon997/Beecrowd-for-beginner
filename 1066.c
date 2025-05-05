#include <stdio.h>

int main() {

    int n;
    int c1=0,c2=0,c3=0,c4=0;
    for(int i =0;i<5;i++){
     scanf("%d",&n);
     if(n%2==0||n==0){
         c1++;
     }
     if(n%2!=0){
         c2++;
     }
     if(n>0){
         c3++;
     }
     if(n<0){
         c4++;
     }
    }

    printf("%d valor(es) par(es)\n",c1);
    printf("%d valor(es) impar(es)\n",c2);
    printf("%d valor(es) positivo(s)\n",c3);
    printf("%d valor(es) negativo(s)\n",c4);

    return 0;
}
