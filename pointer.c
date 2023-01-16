#include<stdio.h>
void swap(int* x,int*y){
    int d;
    d=*x;
    *x=*y;
    *y=d;
    return;
}
int main(){
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    int* x=&a;
    int* y=&b;
    swap(x,y);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
    
}