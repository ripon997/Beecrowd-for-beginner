#include<stdio.h>

int main(){

    float A,B,C,Perimetro,Area;
    scanf("%f %f %f",&A,&B,&C);

    if(A+B>C&&B+C>A&&A+C>B){
        Perimetro = A+B+C;
        printf("Perimetro = %.1f\n",Perimetro);
    }
    else{
        Area = (A+B)*C/2;
        printf("Area = %.1f\n",Area);
    }
    return 0;
}
