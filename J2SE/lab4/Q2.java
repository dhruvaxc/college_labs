/*We need to write the function to check the password entered is correct or not 
based on the following
conditions.
a) It must have atleast one lower case character and one digit.
b) It must not have any Upper case characters and any special characters
c) length should be b/w 5-12.
d) It should not have any same immediate patterns like
abcanan1 : not acceptable coz of an an pattern
abc11se: not acceptable, coz of pattern 11
123sd123 : acceptable, as not immediate pattern
adfasdsdf : not acceptable, as no digits
Aasdfasd12: not acceptable, as have uppercase character */
import java.util.Scanner;

public class Q2
{
    public static boolean Checkpassword(String pw)
    {
        boolean c1 = false, c2 = false, c3 = false;

        if (pw.length() > 4 && pw.length() < 13)
            c1 = true;

        for (int i = 0; i < pw.length(); i++)
        {
            char c = pw.charAt(i);
            if (Character.isLowerCase(c))
                c2 = true;
            if (Character.isDigit(c))
                c3 = true;
            if (Character.isUpperCase(c))
                return false;
            if (!Character.isLetterOrDigit(c))
                return false;
        }

        int l = pw.length();
        for (int size = 2; size <= l / 2; size++)
        {
            for (int i = 0; i <= l - 2 * size; i++)
            {
                String first = pw.substring(i, i + size);
                String second = pw.substring(i + size, i + 2 * size);
                if (first.equals(second))
                {
                    return false;
                }
            }
        }

        if (c1 && c2 && c3)
            return true;
        else
            return false;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter password: ");
        String pw = sc.nextLine();

        if (Checkpassword(pw))
            System.out.println("Valid password");
        else
            System.out.println("Invalid password");

        sc.close();
    }
}