#include<stdio.h>
int main(){
    int a,b,c,i,sum;
    printf("enter upper limit");
    scanf("%d",&b);
    printf("enter lower limit");
    scanf("%d",&a);
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
    }
        printf("%d",sum);
    
    return 0;
}