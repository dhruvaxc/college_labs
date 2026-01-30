/*Write a program to display numbers in reverse from N to 1 using while loop. */
import java.util.Scanner;

public class Q79
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        while (n >= 1)
        {
            System.out.println(n);
            n--;
        }
        sc.close();
    }
}
