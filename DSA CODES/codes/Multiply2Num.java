
import java.lang.*;
import java.util.*;
//Multiply by 2 number by taking input

public class Multiply2Num{
	public static void main(String arg[])
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the first number: ");
		int iNo1 = scanner.nextInt();
		
		System.out.println("Enter Second Number :");
		int iNo2 = scanner.nextInt();
		
		int iNo3 = iNo1 * iNo2;
		
		System.out.println("Multiply by 2 number : "+iNo3);
	}
}
