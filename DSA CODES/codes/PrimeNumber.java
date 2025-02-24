
import java.util.*;

class PrimeNumber{
	public static void main(String str[])
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the Number: ");
		int iNo1 = scanner.nextInt();
		boolean flag = true;
		for(int iCnt = 2; iCnt <iNo1; iCnt++)
			{
				if(iNo1%iCnt==0)
				{
						flag= false;
						break;
				}
				
			}
			
			if(flag)
			{
				System.out.println("Prime number");
			}
			else
			{
				System.out.println(" this is not Prime number");
			}
			
	}
}
		