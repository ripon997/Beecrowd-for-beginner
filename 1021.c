#include<stdio.h>

int main(){

    double amount1;
    int note100,note50,note20,note10,note5,note2;
    int coin100,coin50,coin25,coin10,coin5,coin1;

    scanf("%lf",&amount1);

    int amount=amount1*100.00;

    note100=amount/10000;
    amount%=10000;

    note50=amount/5000;
    amount%=5000;

    note20=amount/2000;
    amount%=2000;

    note10=amount/1000;
    amount%=1000;

    note5=amount/500;
    amount%=500;

    note2=amount/200;
    amount%=200;

    coin100=amount/100;
    amount%=100;

    coin50=amount/50;
    amount%=50;

    coin25=amount/25;
    amount%=25;

    coin10=amount/10;
    amount%=10;

    coin5=amount/5;
    amount%=5;

    coin1=amount/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",note100);
    printf("%d nota(s) de R$ 50.00\n",note50);
    printf("%d nota(s) de R$ 20.00\n",note20);
    printf("%d nota(s) de R$ 10.00\n",note10);
    printf("%d nota(s) de R$ 5.00\n",note5);
    printf("%d nota(s) de R$ 2.00\n",note2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",coin100);
    printf("%d moeda(s) de R$ 0.50\n",coin50);
    printf("%d moeda(s) de R$ 0.25\n",coin25);
    printf("%d moeda(s) de R$ 0.10\n",coin10);
    printf("%d moeda(s) de R$ 0.05\n",coin5);
    printf("%d moeda(s) de R$ 0.01\n",coin1);

    return 0;
}
