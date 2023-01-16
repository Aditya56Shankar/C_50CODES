#include<stdio.h>
int fab(int n){
     int a,b,c,i;
     a=0;
     b=1;
     c=0;
     for(i=1;i<n;i++){
        printf("%d ,",c);
        a=b;
        b=c;
        c=a+b;

     }
     return c;
     
}
int main(){
int a,b,c,n,i;
printf("upto which number=");
scanf("%d",&n);

int d=fab(n);
 printf("%d ,",d);
    return 0;
}
