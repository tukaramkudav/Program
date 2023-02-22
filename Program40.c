#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;
    iCnt = iNo ;
   
    while( iCnt > 0 )
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    printf("\n____________________________________________________________________\n");

}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

}