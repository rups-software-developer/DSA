
import java.util.*;

class SimpleInterest{
	public static void main(String str[])
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the principle amount: ");
		int princleAmount = scanner.nextInt();
		
		System.out.println("Enter the RateofIntrest : ");
		int rte = scanner.nextInt();
		
		System.out.println("Enter the time: ");
		int time = scanner.nextInt();
		
		int simpleIntrest = 0;
		
		simpleIntrest = princleAmount * rte * time/100;
		
		System.out.println("Simple intrest is :"+simpleIntrest);
	}
}
		