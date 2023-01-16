#include<stdio.h>
int main (){
int n,m,i,j,c=0;
printf("row and column =");
scanf("%d%d",&n,&m);
int a[n][m];
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    printf("enter the elements =");
     scanf("%d",&a[i][j]);
     }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     printf("%d\t",a[i][j]);
     c=c+a[i][j];
     }
     printf("\n");
}
printf("%d",c);
return 0;
}