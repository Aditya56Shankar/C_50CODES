#include<stdio.h>
int min(int a, int b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}
int hcf(int a,int b){
    int i,hcf;
    for(i=1;i<=min(a,b);i++){
     if(a%i==0&&b%i==0){
        hcf=i;
     }
    }
    return hcf;
}
int main(){
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter a=");
    scanf("%d",&a);
    int g=hcf(a,b);
    printf("the hcf=%d",g);
    return 0;
}