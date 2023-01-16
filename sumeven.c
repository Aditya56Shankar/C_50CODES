#include<stdio.h>
int main (){
    int a,b,d=0,i;
    printf("upper limit=");
    scanf("%d",&a);
    printf("lower limit=");
    scanf("%d",&b);
    if(b%2!=0)
    {
    b++;
    }
    for(i=b;i<=a;i+=2){
        d+=i;
    }
    printf("%d",d);
    return 0;
}