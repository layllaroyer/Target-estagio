#include <stdio.h>

int pertenceFibonacci(int num);
int main()
{
    int num=0;
    printf("Digite o número que deseja saber se pertence a sequência de Fibonacci:\n");
    scanf("%d", &num);

    int x=pertenceFibonacci(num);
    if(x==0)
        printf("O número %d pertence a sequência de Fibonacci!\n", num);
    else
        printf("O número %d não pertence a sequência de Fibonacci!\n", num);

    return 0;
}
int pertenceFibonacci(int num){
    int num1=0, num2=1,res=0;

    while(res<num){
        res=num1+num2;
        num1=num2;
        num2=res;
    }
    if(num==res)
        return 0;
    else
        return -1;
}
