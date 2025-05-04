#include <stdio.h>

int main() {

    float salary,tax=0;
    scanf("%f",&salary);
    if(salary<=2000){
        tax =0.00;
    }
    else if(salary<=3000){
        tax=(salary-2000)*.08;
    }
    else if(salary<=4500){
        tax=(1000*.08)+(salary-3000)*.18;
    }
    else{
        tax=(1000*.08)+(1500*.18)+(salary-4500)*.28;
    }
    if(tax==0.00){
        printf("Isento\n");
    }
    else{
        printf("R$ %.2f\n",tax);
    }
    return 0;
}
