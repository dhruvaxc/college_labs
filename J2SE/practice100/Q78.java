/*Create a menu-driven program using do-while loop for basic calculator. */
import java.util.Scanner;

public class Q78
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int choice;
        do
        {
            System.out.println("Menu:");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            if (choice >= 1 && choice <= 4)
            {
                System.out.print("Enter first number: ");
                int a = sc.nextInt();
                System.out.print("Enter second number: ");
                int b = sc.nextInt();
                switch (choice)
                {
                    case 1:
                        System.out.println("Result: " + (a + b));
                        break;
                    case 2:
                        System.out.println("Result: " + (a - b));
                        break;
                    case 3:
                        System.out.println("Result: " + (a * b));
                        break;
                    case 4:
                        if (b != 0)
                        {
                            System.out.println("Result: " + (a / b));
                        }
                        else
                        {
                            System.out.println("Division by zero is not allowed.");
                        }
                        break;
                }
            }
        }
        while (choice != 5);
        System.out.println("Calculator exited.");
        sc.close();
    }
}