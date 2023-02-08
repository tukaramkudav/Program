//Steps to follow programming 

//step 1    Understand the problem statement 
//step 2    Write the algorithm
//step 3    Decide the programming language
//step 4    Write the program
//step 5    Test the program



//Problem statement : Accept number from user and cheack whether it is divisible by 5 or not

// Algorithm

/*
    START
        Accept number from user as NO
        Divide that NO by 5 and check the value of remainder
        if the value is 0
            Then display as NO is divisible by 5
        Otherwise
            Then display as NO is not divisible by 5
    END
*/

///////////////////////////////////////////////////////////////

#include<stdio.h>

int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if (iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    

}
/////////////////////////////////////////////////////////////
//Entry point function
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    


    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);
    
    if(iRet == 1)
    {
         printf("%d is divisible by 5 \n",iValue);
    }
    else
    {
        printf("%d is Not divisible by 5 \n",iValue);
       
    }


    return 0;
    
}