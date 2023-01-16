#include<stdio.h>
int main(){
int i,n,odd=0,even=0;
printf("enter the number = ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("enter the element = ");
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if (a[i]%2==0)
even++;
else
odd++;

}
printf("no of even numbers =%d\n",even++);
printf("no of odd numbers =%d\n",odd++);

return 0;
}