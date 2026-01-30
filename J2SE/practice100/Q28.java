/*Create variables for the number of days, 
and convert it to hours, minutes, and seconds. */

import java.util.Scanner;       
public class Q28 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of days: ");
        int days = sc.nextInt();
        int hours = days * 24;
        int minutes = hours * 60;
        int seconds = minutes * 60;
        System.out.println("Days: " + days);
        System.out.println("Hours: " + hours);
        System.out.println("Minutes: " + minutes);
        System.out.println("Seconds: " + seconds);
        sc.close();
    }
}
