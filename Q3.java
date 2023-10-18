package Assignment1;

import java.util.Scanner;

/*Q 3 WAP to ask name ,age and salary of an employee and print on console.*/
public class Q3 {

	public static void main(String[] args) {
		String name;
		int age;
		double salary;
		Scanner s =new Scanner(System.in);
		System.out.println("Enter Name: ");
		name =s.nextLine();
		System.out.println("Enter Age: ");
		age =s.nextInt();
		System.out.println("Enter salary: ");
	    salary =s.nextDouble();
		
		s.close();
		
		
		System.out.println("name is: "+name);
		System.out.println(+age);
		System.out.println(+salary);		
	}

}
