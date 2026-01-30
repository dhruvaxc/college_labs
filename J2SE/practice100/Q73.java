/*Write a program to count the number of digits in a number using while loop. */
import java.util.Scanner;

public class Q73
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int count = 0;
        if (num == 0)
        {
            count = 1;
        }
        else
        {
            while (num != 0)
            {
                num /= 10;
                count++;
            }
        }
        System.out.println("Number of digits: " + count);
        sc.close();
    }
}