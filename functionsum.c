#include<stdio.h>
int add(int x,int y){
    int n;
    n=x+y;
    return n;
}
int main(){
int a,b;
printf("enter a =");
scanf("%d",&a);
printf("enter b =");
scanf("%d",&b);
int sum=add(a,b);
printf("%d",sum);
return 0;
}