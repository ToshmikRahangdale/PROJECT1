package Assignment1;

import java.util.Scanner;

/*Q  10 wap to check greater number among three numbers*/
public class Q10 {

	public static void main(String[] args) {
		int a,b,c;
		
		Scanner s=new Scanner(System.in);
		System.out.println("Enter number");
		
		a=s.nextInt();
		System.out.println("Enter number1: "+a);
		
		b=s.nextInt();
		System.out.println("Enter number2: "+b);
		
		c=s.nextInt();
		System.out.println("Enter number3: "+c);
		
		
		int grater =(a>b)?(a>c?a:c):(b>c?b:c);
		System.out.println("The grater number is: "+grater);
		s.close();
	}

}
