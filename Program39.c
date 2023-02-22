#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("_______________________________________________________________________\n");
    for(iCnt = iNo ; iCnt > 0; iCnt--)
    {
        printf("%d\t",iCnt);
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