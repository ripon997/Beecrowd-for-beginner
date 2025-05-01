#include<stdio.h>

int main(){

    double A,B,C,pi=3.14159;
    double triangle,circle,trapezium,square,rectangle;

    scanf("%lf %lf %lf",&A,&B,&C);

    triangle = 0.5*A*C;
    circle = pi*C*C;
    trapezium = 0.5*(A+B)*C;
    square = B*B;
    rectangle = A*B;

    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);

    return 0;
}
