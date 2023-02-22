#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;
    }
    return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d\n",iValue,iRet);

    return 0;
}