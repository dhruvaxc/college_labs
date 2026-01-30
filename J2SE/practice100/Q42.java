/*Write a program to demonstrate implicit and explicit type casting. */
public class Q42 
{
    public static void main(String[] args) 
    {
        int intValue = 100;
        double doubleValue = intValue; 
        System.out.println("Implicit Type Casting:");
        System.out.println("Integer value: " + intValue);
        System.out.println("Converted to Double value: " + doubleValue);
        double anotherDoubleValue = 99.99;
        int anotherIntValue = (int) anotherDoubleValue; 
        System.out.println("\nExplicit Type Casting:");
        System.out.println("Double value: " + anotherDoubleValue);
        System.out.println("Converted to Integer value: " + anotherIntValue);

    }
}
