package Assignment1;

import java.util.Scanner;

/*Q 4 wap  that ask two numbers from user and print
  greater number among two */
public class Q4 {

	public static void main(String[] args) {
		int num1;
		int num2;
		Scanner s =new Scanner(System.in);
		System.out.println("Enter the number 1");
		num1 =s.nextInt();
		System.out.println("Enter numner 2");
		num2=s.nextInt();
		System.out.println("grater number is");
		if(num1>=num2)
		{
			System.out.println(+num1);
		}
		else
		{
			System.out.println(+num2);
		}
		s.close();
	}

}
