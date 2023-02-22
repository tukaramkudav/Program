#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if ((iNo % iCnt ) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        printf("It is perfect number \n");
    }
    else
    {
        printf("it is Not perfect number\n");
    }

    return iSum;
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iret = SumFactors(iValue);
    printf("Addition of factors is : %d\n",iret);

    return 0;
}