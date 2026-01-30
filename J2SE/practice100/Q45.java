/*Create a program to calculate the area of a circle using float and double data types. */
import java.util.Scanner;
public class Q45 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");
        double radiusDouble = sc.nextDouble();
        float radiusFloat = (float) radiusDouble;   
        float areaFloat = 3.14f * radiusFloat * radiusFloat;
        double areaDouble = Math.PI * radiusDouble * radiusDouble;
        System.out.printf("Area of the circle using float: "+ areaFloat+"\n");
        System.out.printf("Area of the circle using double: "+ areaDouble);
        sc.close();   
    }
}
