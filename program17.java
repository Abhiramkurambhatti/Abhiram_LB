import java.lang.*;

class summation{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		int iSum = 0;
		int iCnt = 0;

		if(iNo<0)
		{
			iNo = -iN0;

		}
		for(iCnt=1; iCnt<=iNo; iCnt++)
		{
			iSum = iSum + iCnt;
		}
		return iSum;
	}
}

main()
{
	int iValue = 0;
	int iRet = 0;

	System.out.println("Enter number:"+iValue);
	iValue = in.nextLine();

	iRet = summation(iValue);
	System.out.println("summation is :"+iRet);

	in.close();
	return 0;
}