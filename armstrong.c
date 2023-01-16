#include<stdio.h>
void armstrong();
int main(){
    armstrong();
    return 0;
}
void armstrong(){
int a,sum=0,c,d;
printf("enter the number=");
scanf("%d",&a);
c=a;
while(a>0){
    d=a%10;
    sum=sum+(d*d*d);
    a=a/10;
}
if(c==sum){
    printf("armstrong number");
}
else
printf("it is not armstrong number");
}