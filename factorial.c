#include<stdio.h>
int main(){
int n,i,r,nf=1,rf=1,nrf=1;
printf("enter the n=");
scanf("%d",&n);
printf("enter the r=");
scanf("%d",&r);

for(i=2;i<=n;i++){
 nf=nf*i;
} 
for(i=2;i<=r;i++){
 rf=rf*i;
} 
for(i=2;i<=(n-r);i++){
 nrf=nrf*i;
} 
int fact;
fact=nf/(rf*nrf);
printf("%d",fact);
return 0;
}