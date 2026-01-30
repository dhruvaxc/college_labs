/*Create a method to find the maximum of three numbers. */
import java.util.Scanner;

public class Q84
{
    public static int maxOfThree(int a, int b, int c)
    {
        int max = a;
        if (b > max)
        {
            max = b;
        }
        if (c > max)
        {
            max = c;
        }
        return max;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int x = sc.nextInt();
        System.out.print("Enter second number: ");
        int y = sc.nextInt();
        System.out.print("Enter third number: ");
        int z = sc.nextInt();
        int result = maxOfThree(x, y, z);
        System.out.println("Maximum: " + result);
        sc.close();
    }
}