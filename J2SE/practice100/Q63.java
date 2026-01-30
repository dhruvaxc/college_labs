/*Write a program to calculate the sum of first N natural numbers. */
import java.util.Scanner;

public class Q63
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        System.out.println("Sum of first " + n + " natural numbers is: " + sum);
        sc.close();
    }
}