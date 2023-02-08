#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iNo)
{
    bool iAns ;
    iAns = iNo % 5;
    if (iAns == true)
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
    bool bRet ;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = DivisibleByFive(iValue);
    if(bRet == false)
    {
       
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
       
    }

    return 0;
}