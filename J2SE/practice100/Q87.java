/*Write a method to calculate factorial and return the result. */
import java.util.Scanner;

public class Q87
{
    public static long factorial(int n)
    {
        long fact = 1;
        int i = 1;
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }
        return fact;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        long result = factorial(num);
        System.out.println("Factorial of " + num + " is: " + result);
        sc.close();
    }
}