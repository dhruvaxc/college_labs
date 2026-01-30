/*Write a method that takes two integers and returns their sum. */
import java.util.Scanner;

public class Q81
{
    public static int add(int a, int b)
    {
        return a + b;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int x = sc.nextInt();
        System.out.print("Enter second number: ");
        int y = sc.nextInt();
        int result = add(x, y);
        System.out.println("Sum: " + result);
        sc.close();
    }
}