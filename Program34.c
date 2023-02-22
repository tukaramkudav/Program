#include<stdio.h>
#include<stdbool.h>

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
    return iSum;    
}

bool Cheackperfect(int iData)
{

    int iAns = 0;

    iAns = SumFactors(iData);
    if (iAns == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool iret = false;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iret = Cheackperfect(iValue);
    if ( iret == true)
    {
        printf("%d is a perfect number \n",iValue);
    }
    else
    {
        printf("%d is a not perfect number\n",iValue);
    }

    return 0;
}