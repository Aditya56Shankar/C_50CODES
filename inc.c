#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("enter c =");
    scanf("%d",&c);
    printf("enter d =");
    scanf("%d",&d);
    a++;
    b--;
    ++c;
    --d;
    printf("increment of a=%d\n",a++);
    printf("decrement of b=%d\n",b--);
    printf("incrementof c=%d\n",++c);
    printf("decrement of d=%d\n",--d);
    return 0;
}