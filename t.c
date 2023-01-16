#include<stdio.h>
void two ();
int main(){
two();
return 0;

}
void two(){
    int a,b;
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    if(a>b){
        printf("%d",a);
    }
    else
    printf("%d",b);
}