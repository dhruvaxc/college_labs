/*Q5)Write an application that inputs one number consisting of five digits from the user, separate the number into
its individual digits and print the digit separates from one another for three spaces each. for example if the user
type the number 42335 the program should print ( 4 2 3 3 5). */
import java.util.Scanner;
public class Q5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        String number = sc.nextLine();
        for (int i = 0; i < number.length(); i++)
        {
            System.out.print(number.charAt(i));
            if (i < number.length() - 1)
            {
                System.out.print("   ");
            }
        }
        sc.close();
    }
}