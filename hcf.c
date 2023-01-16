#include<stdio.h>
int main (){
    int a,b,i,h,min;
    printf("num 1=");
    scanf("%d",&a);
    printf("num 2=");
    scanf("%d",&b);
    min=a<b?a:b;
    for(i=1;i<=min;i++){
        if(a%i==0&&b%i==0){
            h=i;
            
        }
    }
    printf("%d",h);
    return 0;
}