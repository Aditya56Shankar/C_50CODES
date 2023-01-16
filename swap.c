#include<stdio.h>
int main(){
    int a,b;
    printf("enter a =");
    scanf("%d",&a);
       printf("enter b =");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
   printf("b=%d\n",b);
    printf("a=%d\n",a);
    return 0;
}