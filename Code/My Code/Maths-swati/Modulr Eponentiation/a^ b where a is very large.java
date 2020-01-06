 
import java.io.*; 

public class GFG 
{ 

static Long power(long x, int y) 
{ 
	long res = 1; 
    int p =11;
	while (y > 0) 
	{ 
		if ((y & 1) == 1) 
			res = (res%p * x%p)%p; 

		// n must be even now 
		y = y >> 1; // y = y/2 
		x = (x%p * x%p)%p;  
	} 
	return res; 
} 

public static void main (String[] args) 
{ 
	long x = 92233720368547787L; 
	int y = 3; 

	System.out.println("Power is " + 
						power(x, y)); 
} 
} 

