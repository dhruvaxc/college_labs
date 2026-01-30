/*Create a program to check if a person is a 
child, teenager, adult, or senior based on age. */
import java.util.Scanner;

public class Q60
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter age: ");
        int age = sc.nextInt();
        if (age >= 0 && age <= 12)
        {
            System.out.println("Child");
        }
        else if (age >= 13 && age <= 19)
        {
            System.out.println("Teenager");
        }
        else if (age >= 20 && age <= 59)
        {
            System.out.println("Adult");
        }
        else if (age >= 60)
        {
            System.out.println("Senior");
        }
        else
        {
            System.out.println("Invalid age");
        }
        sc.close();
    }
}