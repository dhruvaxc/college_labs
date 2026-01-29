import java.util.Scanner;
import mypackages.Operations;
class Q1 
{
    public static void main(String[] args) 
    {
        Scanner val = new Scanner(System.in);
        Operations operations = new Operations();
        System.out.print("Enter first integer: ");
        int num1 = val.nextInt();
        System.out.print("Enter second integer: ");
        int num2 = val.nextInt();
        System.out.println("Addition: " + operations.add(num1, num2));
        System.out.println("Multiplication: " + operations.multiply(num1, num2));
        System.out.println("Subtraction: " + operations.subtract(num1, num2));
        System.out.println("Quotient: " + operations.quotient(num1, num2));
        val.close();
    }
}