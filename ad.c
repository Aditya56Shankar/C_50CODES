
#include <stdio.h>
int main() 
{
    int a,b,perimeter,area;
    printf("enter length =");
    scanf("%d",&a);
    printf("enter breadth =");
    scanf("%d",&b);
    area=a*b;
    perimeter=2*(a+b);
    
    if(perimeter>area){
      printf("perimeter =%d ",perimeter);  
    }
    else if(area>perimeter){
        printf("area =%d ",area);
    }
    else{
        printf("equal");
    }
    return 0;
}
