using System;

class ArithmeticX
{
	public int CountRange(int iNo)
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
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.CountRange(iValue);

		Console.WriteLine(iRet);
	}
}