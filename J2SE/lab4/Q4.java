/*You have to enter a string and check whether it is a perfect string or not.
A perfect string is a string which has occurance of every character only once.
Eg. absdhkqwertyuioplmnvczx */
import java.util.Scanner;
import java.util.HashSet;

public class Q4
{
    public static boolean isPerfectString(String s)
    {
        HashSet<Character> seen = new HashSet<>();
        for (int i = 0; i < s.length(); i++)
        {
            char c = s.charAt(i);
            if (seen.contains(c))
                return false;
            seen.add(c);
        }
        return true;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = sc.nextLine();
        if (isPerfectString(input))
            System.out.println("Perfect string");
        else
            System.out.println("Not a perfect string");
        sc.close();
    }
}