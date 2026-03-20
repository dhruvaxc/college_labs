import java.util.Scanner;

public class Q2 
{
    public static double totalProfit(int attendees) 
    {
        double income = attendees * 5.0;
        double expense = 20.0 + attendees * 0.5;
        return income - expense;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of attendees:");
        int attendees = sc.nextInt();

        System.out.println("Total Profit = " + totalProfit(attendees));

        sc.close();
    }
}