//to check wheather the given matrix is sparse matrix  or not a matrix whose majority population is zero
#include<stdio.h>
int main(){
    int m,n,i,j,count;
    printf("enter the number of rows and columns= ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
        printf("enter the element = ");
        scanf("%d",&a[i][j]);
        if (a[i][j]==0){
            count++;
        }
    }
    }
    printf("the created matrix is = ");
     for (i=0;i<m;i++){
        for (j=0;j<n;j++){
      printf("%d",a[i][j]);
        }
        printf("\n");
        }
if(count>(m*n)/2){
    printf("sparse");
}
else{
    printf("it is not a sparse");
}
return 0;
    }






