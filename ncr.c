#include<stdio.h>
int factorial(int x){
    int fact=1,i;
    for(i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
int n,r;
printf("enter the n=");
scanf("%d",&n);
printf("enter the r=");
scanf("%d",&r);
int nfact=factorial(n);
int rfact=factorial(r);
int nrfact=factorial(n-r);
int ncr;
ncr=nfact/(rfact*nrfact);
printf("%d",ncr);
return 0;
}