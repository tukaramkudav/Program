#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;
    while (iCnt<= iValue)
    {
        printf("Ganpati Bappa Morya...\n");
        iCnt++;
    }
    
}

int main()
{
    int iNo = 0;
    printf("Enter the number of iteration  do you want :\n");
    scanf("%d",&iNo);

    printf("Output :\n");
    Display(iNo);

    return 0;
}