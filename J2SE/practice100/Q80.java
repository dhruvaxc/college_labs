/*Create a program to validate password entry (3 attempts) using do-while loop. */
import java.util.Scanner;

public class Q80
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String password = "svnit123";
        int attempts = 0;
        boolean success = false;
        do
        {
            System.out.print("Enter password: ");
            String input = sc.next();
            attempts++;
            if (input.equals(password))
            {
                success = true;
                break;
            }
            else
            {
                System.out.println("Incorrect password. Attempts left: " + (3 - attempts));
            }
        }
        while (attempts < 3);
        if (success)
        {
            System.out.println("Access granted.");
        }
        else
        {
            System.out.println("Access denied. Too many attempts.");
        }
        sc.close();
    }
}