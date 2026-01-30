/*Write an application that input from the user that the radius of the circle is an integer and the print the circle
diameter , circumfrence and area using the floating point value 3.14159 for math.Pi(You can also use the
predefined constant math.pi for the value of pi.) */
import java.util.Scanner;
public class Q4 
{
    public static void main(String[] args)
    {
        System.out.println("enter the radius of the circle ");
        Scanner sc = new Scanner(System.in);
        double radius = sc.nextDouble();
        float pi=3.14159265f;
        double diameter = 2 * radius;
        double circumference = 2 * pi * radius;
        double area = pi * radius * radius;
        System.out.println(":::::using PI=3.14:::::");
        System.out.println("Diameter of the circle is: " + diameter);
        System.out.println("Circumference of the circle is: " + circumference);
        System.out.println("Area of the circle is: " + area);
        circumference = 2 * Math.PI * radius;
        area = Math.PI * radius * radius;
        System.out.println(":::::using Math.PI:::::");
        System.out.println("Diameter of the circle is: " + diameter);
        System.out.println("Circumference of the circle is: " + circumference);
        System.out.println("Area of the circle is: " + area);
        sc.close();
    }
}