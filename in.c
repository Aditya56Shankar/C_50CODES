# include<stdio.h>

int main(){
    int a,b,c;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("enter c =");
    scanf("%d",&c);
    printf("increasing order =%d \n",a>b>c);
    printf("increaing order =%d\n",b>a>c);
    printf("increasing order =%d\n",c>b>a);
    return 0;
}