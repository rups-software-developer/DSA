
//find perimeter  of traingle in java
//(Perimeter of a triangle = Sum of the lengths of all three sides.)

import java.lang.*;
import java.util.*;

class TrainglePerimeter{
	public static void main(String arg[])
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter first length:");
		
		int iNo1 = scanner.nextInt();
		
		
		System.out.println("Enter second length:");
			int iNo2 = scanner.nextInt();
			
		
		System.out.println("Enter third length:");
		
			int iNo3 = scanner.nextInt();
		
		System.out.println("Perimeter of traingle is : "+(iNo1 + iNo2 + iNo3));
	}
}
		