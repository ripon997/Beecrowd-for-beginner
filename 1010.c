#include<stdio.h>

int main(){

    int product1,numberp1;
    int product2,numberp2;
    float price1,price2,price;

    scanf("%d %d %f", &product1,&numberp1,&price1);
    scanf("%d %d %f", &product2,&numberp2,&price2);
    price = (numberp1*price1)+(numberp2*price2);

    printf("VALOR A PAGAR: R$ %.2f",price);
    return 0;
}
