/*Write a method to check if a number is prime. Return boolean. */
import java.util.Scanner;

public class Q85
{
    public static boolean isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        int i = 2;
        while (i <= n / 2)
        {
            if (n % i == 0)
            {
                return false;
            }
            i++;
        }
        return true;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        if (isPrime(num))
        {
            System.out.println(num + " is prime.");
        }
        else
        {
            System.out.println(num + " is not prime.");
        }
        sc.close();
    }
}