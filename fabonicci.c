#include<stdio.h>
int main(){
    int a,b,c,d,i;
    printf("upto which term =");
    scanf("%d",&d);
    a=0;
    b=1;
    c=0;
    for(i=1;i<=d;i++){
         printf("%d ,",c);
        a=b;
        b=c;
        c=a+b;
        
    }
    return 0;
}