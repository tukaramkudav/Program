#include<stdio.h>

int Multiplication(int iValue1, int iValue2)
{
    int iMul = 0;

    iMul = iValue1 * iValue2;

    return iMul;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter First Number:\n");
    scanf("%d",&iNo1);

    printf("Enter Second Number:\n");
    scanf("%d",&iNo2);

    iRet = Multiplication(iNo1,iNo2);

    printf("Multiplication of two no is: %d",iRet);

    return 0;
}