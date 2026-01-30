/*Declare variables for storing the radius of a circle. 
Calculate and display area and circumference. */
public class Q29 
{
    public static void main(String[] args) 
    {
        double radius = 7.5;
        double area = Math.PI * radius * radius;
        double circumference = 2 * Math.PI * radius;

        System.out.printf("Radius: %.2f%n", radius);
        System.out.printf("Area: %.2f%n", area);
        System.out.printf("Circumference: %.2f%n", circumference);    
    }
}
