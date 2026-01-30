/*Create a program using do-while loop that asks 
user to continue until they enter n */
import java.util.Scanner;

public class Q76
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String choice;
        do
        {
            System.out.println("Program is running...");
            System.out.print("Do you want to continue? (Y/N): ");
            choice = sc.next();
        }
        while (!choice.equalsIgnoreCase("N"));
        System.out.println("Program ended.");
        sc.close();
    }
}