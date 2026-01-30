/*Create a program to determine the grade based on marks (A, B, C, D, F). */
import java.util.Scanner;
public class Q56 
{
    public static void main(String[] args) 
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the total marks out of hundred");
        float m= sc.nextFloat();      
        if(m>90)
        {
            System.out.println("grade A");
            System.exit(0);
        }
        else if (m>80)
        {
            System.out.println("grade B");
            System.exit(0);
        }
         else if (m>70)
        {
            System.out.println("grade C");
            System.exit(0);
        }
         else if (m>60)
        {
            System.out.println("grade D");
            System.exit(0);
        }
         else if (m>50)
        {
            System.out.println("grade E");
            System.exit(0);
        }
         else 
        {
            System.out.println("grade F");
            System.exit(0);
        }
        sc.close();

    }
}
