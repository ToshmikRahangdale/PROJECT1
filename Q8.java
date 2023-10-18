package Assignment1;

import java.util.Scanner;

/*Q 8 wap to check is number is even or odd.
*/
public class Q8 {

	public static void main(String[] args) {
		int num;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter Number: ");
		num =s.nextInt();
		System.out.println(+num);
		if(num%2==0)
		{
			System.out.println("Number is even");
		}
		else
		{
			System.out.println("Number is odd");
		}
		s.close();
		
	}

}
