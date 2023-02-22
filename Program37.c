#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    printf("Table of %d is :\n",iNo);
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
       printf("%d * %d = %d\n",iNo,iCnt,iNo*iCnt);
    }
}

int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}

