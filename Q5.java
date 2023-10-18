package Assignment1;

import java.util.Scanner;

/*Q 5 wap to ask product name and price of product from user and calculate discount i.e 
if price > 2000 then discount is 10 percent of price 
else 
discount is 7 % of price*/
public class Q5 {

	public static void main(String[] args) {
		String ProdectName;
		double price;
		double discount;
		double finalprice;
		Scanner s =new Scanner(System.in);
		System.out.println("Enter Product name:");
		ProdectName =s.nextLine();
		System.out.println();
		
		System.out.println("Enter the pric:");
		price =s.nextDouble();
		System.out.println();
		System.out.println("Discount price");
		discount =(price>2000)?(price*0.1):(price*0.7);
		System.out.println(+discount);
		System.out.println("finalprice");
		finalprice =price-discount;
		System.out.println(+finalprice);
		s.close();
		
	}

}
