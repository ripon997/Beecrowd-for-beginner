#include<stdio.h>

int main(){

    int amount;
    int note100,note50,note20,note10,note5,note2,note1;
    scanf("%d",&amount);
    printf("%d\n",amount);

    note100=amount/100;
    amount%=100;

    note50=amount/50;
    amount%=50;

    note20=amount/20;
    amount%=20;

    note10=amount/10;
    amount%=10;

    note5=amount/5;
    amount%=5;

    note2=amount/2;
    amount%=2;

    note1=amount;



    printf("%d nota(s) de R$ 100,00\n",note100);
    printf("%d nota(s) de R$ 50,00\n",note50);
    printf("%d nota(s) de R$ 20,00\n",note20);
    printf("%d nota(s) de R$ 10,00\n",note10);
    printf("%d nota(s) de R$ 5,00\n",note5);
    printf("%d nota(s) de R$ 2,00\n",note2);
    printf("%d nota(s) de R$ 1,00\n",note1);

    return 0;
}
