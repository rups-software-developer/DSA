import java.util.*;

class FactorialNumber{
	public static void main(String str[])
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the Number: ");
		int iNo1 = scanner.nextInt();
		
		for(int iCnt = 1; iCnt <iNo1; iCnt++)
			{
				if(iNo1%iCnt==0)
				{
					System.out.println("factor is : "+iCnt);
				}
				
			}
	}
}
		