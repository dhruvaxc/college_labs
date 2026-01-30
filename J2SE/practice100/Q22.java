/*Create variables for storing the price of three items. 
Calculate and display the total. */

import java.util.Scanner;
public class Q22 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the price of item 1: ");
        double item1 = scanner.nextDouble();
        System.out.print("Enter the price of item 2: ");
        double item2 = scanner.nextDouble();
        System.out.print("Enter the price of item 3: ");
        double item3 = scanner.nextDouble();        
        double total = item1 + item2 + item3;        
        System.out.println("Total price: $" + total);       
        scanner.close();
    }
}
