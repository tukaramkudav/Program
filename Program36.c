#include<stdio.h>

int DisplayNonFactor(int iNo)
{
    register int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iret=DisplayNonFactor(iValue);
    printf("Addition of non factors : %d\n",iret);


    return 0;
}