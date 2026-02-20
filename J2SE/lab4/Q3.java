/*A string is entered like aabcdeaabcjlkjerwlaaabbsadfdsf...
And you have to print those characters which exceed a given no. n entered by user. */
import java.util.Scanner;
public class Q3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = sc.nextLine();
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        int[] freq = new int[256];
        for (int i = 0; i < input.length(); i++)
        {
            char c = input.charAt(i);
            freq[c]++;
        }
        System.out.println("Characters exceeding " + n + ":");
        boolean found = false;
        for (int i = 0; i < 256; i++)
        {
            if (freq[i] > n)
            {
                System.out.println((char)i + " -> " + freq[i]);
                found = true;
            }
        }
        if (!found)
        {
            System.out.println("None");
        }
        sc.close();
    }
}