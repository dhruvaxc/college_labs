/*Write a method with method overloading for calculating area of circle and rectangle. */
import java.util.Scanner;

public class Q89
{
    public static double area(double radius)
    {
        return Math.PI * radius * radius;
    }

    public static int area(int length, int width)
    {
        return length * width;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius of circle: ");
        double r = sc.nextDouble();
        System.out.println("Area of circle: " + area(r));
        System.out.print("Enter length of rectangle: ");
        int l = sc.nextInt();
        System.out.print("Enter width of rectangle: ");
        int w = sc.nextInt();
        System.out.println("Area of rectangle: " + area(l, w));
        sc.close();
    }
}