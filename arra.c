#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the size = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the element =");
        scanf("%d",&a[i]);
    }
     
    for(i=(n-1);i>=0;i--){
     printf("\n%d is the address of created array = %d,",i,a[i]);
    }
 
    return 0;
}