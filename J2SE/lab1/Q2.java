import java.util.Scanner;
public class Q2
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first integer: ");
        int num1 = input.nextInt();
        System.out.print("Enter second integer: ");
        int num2 = input.nextInt();
        if (num1 > num2)
        {
            System.out.println(num1 + " is larger");
        }
        else if (num2 > num1)
        {
            System.out.println(num2 + " is larger");
        }
        else
        {
            System.out.println("The numbers are equal");
        }
        input.close();
    }
}