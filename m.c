#include<stdio.h>
int main(){
    float principle,rate,time,si;
    printf("principle=");
    scanf("%f",&principle);
    printf("rate=");
    scanf("%f",&rate);
    printf("time=");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf("si=%f",si);
    return 0;
}