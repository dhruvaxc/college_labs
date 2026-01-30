/*Create a Circle class with radius attribute. Add a method to calculate circumference. */
class Circle 
{
    private double radius;
    public Circle(double radius) 
    {
        this.radius = radius;
    }
    public double calculateCircumference() 
    {
        return 2 * Math.PI * radius;
    }
}
public class Q19 
{
    public static void main(String[] args) 
    {
        Circle circle = new Circle(4.0);
        double circumference = circle.calculateCircumference();
        System.out.println("Circumference of the circle: " + circumference);
        
    }
}
