import java.util.*;

class CountingNumber{
	public static void main(String str[])
	{
		try(Scanner scanner = new Scanner(System.in)){
		System.out.println("Enter the Number: ");
		int NthNumber = scanner.nextInt();
		int count= 0;
		for(int iCnt = NthNumber; iCnt >= 1; iCnt --)
			{
				count++;
				System.out.println("number is: "+iCnt);
			}
			
			System.out.println("counting number is :"+count);
			
		}
	}
}
		