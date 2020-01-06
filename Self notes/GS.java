given a long string, and 2 words, I had to find the minimum distance between the mid-points of the occurrences of the pair of words. 

Goldman Sachs Topics for Interview Preparation


https://www.geeksforgeeks.org/Goldman-Sachs-topics-interview-preparation/

1.Find if two rectangles overlap

2. https://www.geeksforgeeks.org/static-class-in-java/

Summary-Inside a java class we can define another class.It can be static or non static.
a)Inner class can access both static and non-static members of outer class.
		But static class can access only static members.
b) An instance of Inner class cannot be created without an instance of outer class unlike static class instance.
example- OuterClass.NestedStaticClass printer = new OuterClass.NestedStaticClass(); //nested static class
		 OuterClass.InnerClass innerObject = new OuterClass().new InnerClass(); // nested class
		 
Q2)Check if two arrays are equal or not
Arrays.sort(arr);
using hashmap

Q3)Ugly Numbers
simple approach is done.
to do dynamic

Q4)Reverse words in a given string
String s[]="i like this program very much".split(" "); 
StringUtils.split("some,random words", " ");//better one...takes care of null pointer exception

Q5)Given a string, find its first non-repeating character

Q6)Find Excel column name from a given column number
columnName.append( (char) ((rem - 1) + 'A') )

Q7)Pascal's Triangle

Q8)

Q9)Given an array of numbers, program to arrange the numbers to form the largest number.
Refere this :https://www.javatpoint.com/java-string-compareto -- very good
class GFG { 

	static void printLargest(Vector<String> arr){ 
	
		Collections.sort(arr, new Comparator<String>(){ 

		@Override
		public int compare(String X, String Y) { 
		
		// first append Y at the end of X 
		String XY=X + Y; 
		
		// then append X at the end of Y 
		String YX=Y + X; 
		
		// Now see which of the two formed numbers is greater 
		return XY.compareTo(YX) > 0 ? -1:1; 
	} 
	}); 
		
	Iterator it = arr.iterator(); 

	while(it.hasNext()) 
		System.out.print(it.next()); 
	} 
	
	public static void main (String[] args) { 
		
		Vector<String> arr; 
		arr = new Vector<>(); 
		
		arr.add("54"); 
		arr.add("546"); 
		arr.add("548"); 
		arr.add("60"); 
		printLargest(arr); 	
	
	} 
} 

Q10)alternatively-merge-two-strings-in-java?
StringBuilder finalString = new StringBuilder(); 
finalString.append(s1.charAt(i++)); 

Q11)print-number-ascending-order-contains-1-2-3-digits

Q12)LRU Cache implementation
using deque

Q13)given-a-sequence-of-words-print-all-anagrams-together --good implementation using HashMap
 
import java.util.*; 

public class FindAnagrams { 

	private static void printAnagrams(String arr[]) 
	{ 
		HashMap<Integer, List<String> > map = new HashMap<>(); 

		// loop over all words 
		for (int i = 0; i < arr.length; i++) { 

			// convert to char array, sort and 
			// then re-convert to string 
			String word = arr[i]; 
			char[] letters = word.toCharArray(); 
			Arrays.sort(letters); 
			String newWord = new String(letters); 

			// calculate hashcode of string 
			// after sorting 
			int n = newWord.hashCode(); 
			if (map.containsKey(n)) { 

				// Here, we already have 
				// a word for the hashcode 
				List<String> words = map.get(n); 
				words.add(word); 
				map.put(n, words); 
			} 
			else { 

				// This is the first time we are 
				// adding a word for a specific 
				// hashcode 
				List<String> words = new ArrayList<>(); 
				words.add(word); 
				map.put(n, words); 
			} 
		} 

		// print all the values where size is > 1 
		// If you want to print non-anagrams, 
		// just print the values having size = 1 
		for (Integer i : map.keySet()) { 
			List<String> values = map.get(i); 
			if (values.size() > 1) { 
				System.out.print(values); 
			} 
		} 
	} 

	public static void main(String[] args) 
	{ 

		// Driver program 
		String arr[] = { "cat", "dog", "tac", "god", "act" }; 
		printAnagrams(arr); 
	} 
} 
Q14)detect-and-remove-loop-in-a-linked-list?

Q15)Number of flips to make binary string alternate?

Q16)Form minimum number from given sequence?

Q17)Median of two sorted arrays of different sizes
https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/

Q18).An array of sentences containing an IP Address as a word in between. Print the most frequently occurring IP addresses(Duplicates also).

Q19).Map Internal implementation and its usage

Q20)Given an array of words. (N) and (Q ) queries – each query is again a word. You have to print the anagrams for the word from the array of words.

Q21)Search an element in a rotated sorted array--supperr important
