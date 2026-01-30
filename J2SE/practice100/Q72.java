/*Create a program to find the sum of numbers until the user enters 0. */
import java.util.Scanner;

public class Q72
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        int num;
        System.out.println("Enter numbers (0 to stop):");
        while (true)
        {
            num = sc.nextInt();
            if (num == 0)
            {
                break;
            }
            sum += num;
        }
        System.out.println("Sum of entered numbers: " + sum);
        sc.close();
    }
}