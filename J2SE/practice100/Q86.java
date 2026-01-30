/*Create a method that converts temperature from Celsius to Fahrenheit. */
import java.util.Scanner;

public class Q86
{
    public static double toFahrenheit(double celsius)
    {
        return (celsius * 9 / 5) + 32;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter temperature in Celsius: ");
        double c = sc.nextDouble();
        double f = toFahrenheit(c);
        System.out.println("Temperature in Fahrenheit: " + f);
        sc.close();
    }
}