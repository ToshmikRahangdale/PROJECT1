package Assignment1;
/*Q 7  How to swap two numbers without using a third variable?*/
public class Q7 {

	public static void main(String[] args) {
		int a,b;
		a=10;
		b=20;
		
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println("a="+a);
		System.out.println("b="+b);
		
	}

}
