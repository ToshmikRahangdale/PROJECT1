package Assignment1;

import java.util.Scanner;

/*Q 2 using ternary check if number entered by user is positive or negative .
In case number is positive store "Positive number" else store negative number to Result variable*/
public class Q2 {

	public static void main(String[] args) {
		Scanner s =new Scanner(System.in);
		System.out.println("Enter number:");
		double number =s.nextDouble();
		System.out.println("");
		s.close();
		String Result =(number>0)?"positive number":"Negative number";
		System.out.println("Result is: "+Result);
		
		
	}

}
