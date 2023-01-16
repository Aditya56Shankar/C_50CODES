#include<stdio.h>
int main (){
int m,n,i,j;
printf("no. of row =");
scanf("%d",&m);
printf("no. of column =");
scanf("%d",&n);
int a[m][n];
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("enter the element=");
        scanf("%d",&a[i][j]);
    }
}
printf("the matrix is \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");
}
printf("the transpose of matrix \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d\t",a[j][i]);
        }
        printf("\n");
}

return 0;
}