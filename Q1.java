package Assignment1;

import java.util.Scanner;

/*wap to demonstrate ternary operator .define a variable marks  .ask its
value from user and using ternary operator check if marks > 40 store
"Pass" in result variable else store "Fail"*/
public class Q1 {
public static void main(String[] args) {
	Scanner s =new Scanner(System.in);
			System.out.println("Enter your mark");
			double mark = s.nextDouble();
			s.close();
			String result =(mark>40)?"Pass":"Fail";
			System.out.println("Your Result :"+result);
	
}
}
