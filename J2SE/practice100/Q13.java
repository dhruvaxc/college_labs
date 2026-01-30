/*Create a Rectangle class with length and width attributes. 
Add a method to calculate area. */
class Rectangle 
{
    private double length;
    private double width;
    
    public Rectangle(double length, double width) 
    {
        this.length = length;
        this.width = width;
    }
    
    public double calculateArea() 
    {
        return length * width;
    }
}
public class Q13 
{
    public static void main(String[] args) 
    {
        Rectangle rect = new Rectangle(5.0, 3.0);
        double area = rect.calculateArea();
        System.out.println("Area of the rectangle: " + area);
        
    }
}
