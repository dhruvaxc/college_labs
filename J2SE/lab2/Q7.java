/*Q7.)A parking garage charges a $2.00 minimum fee to park for up to three hours.
The garage charges an additional $0.50 per hours for each hours or part thereof 
in excess of three hours. The maximum charge for any given 24-hours period is 
$10.00.Assume that no car parks for longer than 24 hours at a time. Write an 
application that calculates and displays the parking charges for each customers 
who parked in the garage yesterday. You should enter the hours parked for each 
customers . The program should display the charge for the current
customers and should calculate and display the running total os yesterday's 
receipts. It should use the method calculate charges to determine the charge 
for each customer. */
import java.util.Scanner;
public class Q7 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        double total_receipts=0.0;
        System.out.println("Enter the number of customers parked yesterday:");
        int n=sc.nextInt(); 
        for(int i=1;i<=n;i++)
        {
            System.out.println("Enter the hours parked for customer "+i+":");
            double hours_parked=sc.nextDouble();
            if(hours_parked<0)
            {
                System.out.println("Invalid input. Hours parked cannot be negative.");
                i--; 
                continue; 
            }
            else if(hours_parked<=3)
            {
                double charge=2.0;
                System.out.println("The parking charge for customer "+i+" is: $"+charge);
                total_receipts+=charge;
            }
            else if(hours_parked>3 && hours_parked<=24)
            {
                double extra_hours=hours_parked-3;
                double charge=2.0+(extra_hours*0.5);
                if(charge>10.0)
                {
                    charge=10.0;
                }
                System.out.println("The parking charge for customer "+i+" is: $"+charge);
                total_receipts+=charge;
            }
            else
            {
                System.out.println("Invalid input. Hours parked cannot exceed 24 hours.");
                i--; 
                continue; 
            }
        }
        sc.close();
        System.out.println("The total receipts for yesterday's parking garage is: $"+total_receipts);
    }
}