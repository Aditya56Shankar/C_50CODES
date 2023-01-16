#include<stdio.h>
int factorial(int x){
    int num=1,i;
    for(i=2;i<=x;i++){
        num=num*i;
    }
    return num;
}
int main(){
int n;
printf("enter the n=");
scanf("%d",&n);

int nfact=factorial(n);
printf("%d",nfact);
return 0;
}