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