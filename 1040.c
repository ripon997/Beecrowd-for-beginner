#include<stdio.h>

int main(){

    float N1,N2,N3,N4;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    float average;

    average = (N1*2+N2*3+N3*4+N4*1)/10;

    printf("Media: %f\n",average);
    if(average>=7){
        printf("Aluno aprovado.\n");
    }
    else if(average<5.0){
        printf("Aluno reprovado.\n")
    }
    else if(average>=5.0&&average<=6.9){
        print("Aluno em exame.\n");
    }

    return 0;
}
