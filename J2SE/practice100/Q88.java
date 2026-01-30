/*Create a method that takes a String and returns its reverse. */
import java.util.Scanner;

public class Q88
{
    public static String reverse(String s)
    {
        String rev = "";
        int i = s.length() - 1;
        while (i >= 0)
        {
            rev = rev + s.charAt(i);
            i--;
        }
        return rev;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        String result = reverse(str);
        System.out.println("Reversed string: " + result);
        sc.close();
    }
}