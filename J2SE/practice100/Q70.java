/*Create a program to find the sum of digits of a number. */
import java.util.Scanner;

public class Q70
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int sum = 0;
        for (; num != 0; num /= 10)
        {
            int digit = num % 10;
            sum += digit;
        }
        System.out.println("Sum of digits: " + sum);
        sc.close();
    }
}