// Java program to find whether 
// a no is power of two 
import java.io.*; 

class GFG { 

	// Function to check if 
	// x is power of 2 
	static boolean isPowerOfTwo(int n) 
	{ 
		if (n == 0) 
			return false; 
		
		while (n != 1) 
		{ 
			if (n % 2 != 0) 
				return false; 
			n = n / 2; 
		} 
		return true; 
	} 
	
	static boolean isPowerOfTwoBitwise(int n) 
	{ 
		int count = 0; 
		while (n > 0) 
		{ 
			count += n & 1; 
			n >>= 1; 
		} 
		if(count == 1)
		return true;
		return false;
	} 

	
	// Driver program 
	public static void main(String args[]) 
	{ 
		if (isPowerOfTwo(31)) 
			System.out.println("Yes"); 
		else
			System.out.println("No"); 
		if (isPowerOfTwoBitwise(31)) 
			System.out.println("Yes"); 
		else
			System.out.println("No"); 

		 
	} 
} 

