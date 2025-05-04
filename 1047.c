#include <stdio.h>

int main() {

    float salary,newSalary,earn;
    scanf("%f",&salary);
    int percentage;

    if(salary<=400.00){
        percentage = 15;
    }
    else if(salary<=800.00)
    {
        percentage =12;
    }
    else if(salary<=1200.00){
        percentage =10;
    }
    else if(salary<=2000){
        percentage=7;
    }
    else{
        percentage=4;
    }
    newSalary=salary + salary*percentage/100;
    earn=newSalary-salary;

    printf("Novo salario: %.2f\n",newSalary);
    printf("Reajuste ganho: %.2f\n",earn);
    printf("Em percentual: %d %%\n",percentage);
    return 0;
}
