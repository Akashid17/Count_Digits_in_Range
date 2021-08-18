
#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        if(iNo%10 > 3 && iNo%10 < 7)
        {
            iCnt++;
        }
        
        iNo /= 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return 0;
}