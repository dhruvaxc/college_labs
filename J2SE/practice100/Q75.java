/*Write a program to check if a number is palindrome using while loop. */
import java.util.Scanner;

public class Q75
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int original = num;
        int rev = 0;
        while (num != 0)
        {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        if (original == rev)
        {
            System.out.println(original + " is a palindrome.");
        }
        else
        {
            System.out.println(original + " is not a palindrome.");
        }
        sc.close();
    }
}