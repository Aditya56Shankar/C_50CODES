#include<stdio.h>
int main()
{
   /*ENTER 1 FOR C.B.S.E AND 2 FOR U.P.BOARD*/
    int cbse = 1,upboard = 2;
    printf("enter number");
    scanf("%d","%d",&cbse,&upboard);
    
    switch(cbse)
    {  
    case 1 : printf("welcome to C.B.S.E ");
    scanf("%d",&cbse);
    switch(upboard)
    {
    case 2 : printf("welcome to U.P.BOARD");
    break;
    default : printf("INVALID BOARD");
    break;

    }
    break;
    default : printf("Invalid BOARD");
    }
    return 0;
}
