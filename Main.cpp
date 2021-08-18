
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int CountRange(int);
};

int ArithmeticX::CountRange(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

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
    ArithmeticX aobj;

    int iValue = 0;
    
    cout<<"Enter Number\n";
    cin>>iValue;

    int iRet = aobj.CountRange(iValue);

    cout<<iRet<<endl;

    return 0;
}