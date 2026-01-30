/*Write a method that calculates and returns the area of a rectangle. */
import java.util.Scanner;

public class Q83
{
    public static int area(int length, int width)
    {
        return length * width;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        int l = sc.nextInt();
        System.out.print("Enter width: ");
        int w = sc.nextInt();
        int result = area(l, w);
        System.out.println("Area of rectangle: " + result);
        sc.close();
    }
}