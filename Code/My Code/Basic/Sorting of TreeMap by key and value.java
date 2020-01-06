
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    TreeMap<Integer,ArrayList<String>> tm=new TreeMap<Integer,ArrayList<String>>();
		    while(n-->0){
		    String str=sc.next();
		    int k=sc.nextInt(); 
		    if(tm.containsKey(k)){
		        ArrayList<String> lhs=tm.get(k);
		        lhs.add(str);
		        tm.put(k,lhs);
		    }
		    else{
		        ArrayList<String> lhs=new ArrayList<>();
		        lhs.add(str);
		        tm.put(k,lhs);
		    }
		}
		for(int x:tm.keySet()){
		    ArrayList<String> lhs=tm.get(x);
		    Collections.sort(lhs);
		    for(String s:lhs){
		        System.out.print(s+" "+x+" ");
		    }
		}
		System.out.println("");
	}
	}
}
