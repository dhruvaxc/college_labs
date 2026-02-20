/*you have to enter a range from a and b and search how many no. of times a pattern n. 
occurs between the range a and b.
Eg :i/p:enter range :0 100
Enter pattern: 13
o/p: the no. times 13 occurred betwwn 0 to 100:1
Eg :i/p:enter range :100 1000
Enter pattern: 13
o/p: the no. times 13 occurred betwwn 100 to 1000:
(in this 13,113,131,132,133.139,213,313,.913 all these will be counted) */
import java.util.Scanner;

public class Q5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter range: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.print("Enter pattern: ");
        String pattern = sc.next();
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            String numStr = String.valueOf(i);
            if (numStr.contains(pattern))
            {
                count++;
            }
        }
        System.out.println("The no. times " + pattern + " occurred between " + a + " to " + b + ": " + count);
        sc.close();
    }
}