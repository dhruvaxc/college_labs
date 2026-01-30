/*Create a method to check if a number is even or odd. Return boolean. */
import java.util.Scanner;

public class Q82
{
    public static boolean isEven(int n)
    {
        return n % 2 == 0;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        if (isEven(num))
        {
            System.out.println(num + " is even.");
        }
        else
        {
            System.out.println(num + " is odd.");
        }
        sc.close();
    }
}