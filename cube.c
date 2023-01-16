#include<stdio.h>
void cube();
int main(){
    cube();
    return 0;
}
void cube(){
    int a,b;
    printf("enter side =");
    scanf("%d",&a);
    b=a*a*a;
    printf("cube of %d =%d",a,b);
}