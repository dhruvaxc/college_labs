/*Create a program to check if a triangle is valid based on three sides. */
import java.util.Scanner;

public class Q58
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter side 1: ");
        int a = sc.nextInt();
        System.out.print("Enter side 2: ");
        int b = sc.nextInt();
        System.out.print("Enter side 3: ");
        int c = sc.nextInt();
        if (a + b > c && a + c > b && b + c > a)
        {
            System.out.println("The triangle is valid.");
        }
        else
        {
            System.out.println("The triangle is NOT valid.");
        }
        sc.close();
    }
}
