/*Create a recursive method to calculate power (x^n). */
import java.util.Scanner;

public class Q90
{
    public static long power(int x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return x * power(x, n - 1);
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter base: ");
        int base = sc.nextInt();
        System.out.print("Enter exponent: ");
        int exp = sc.nextInt();
        long result = power(base, exp);
        System.out.println(base + "^" + exp + " = " + result);
        sc.close();
    }
}