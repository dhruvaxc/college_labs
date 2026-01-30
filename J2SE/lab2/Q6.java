/*Develop a java application that determines whether any of several department -
store customer has exceeded the credit limit on a charge account. For each customer following facts are available:
 account number.
 balance at the begining of the month.
 total of all items charged by the customer this month.
 total of all credits applied to the */
import java.util.Scanner;
public class Q6 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter the credit limit:");
        Scanner sc=new Scanner(System.in);
        int credit_limit=sc.nextInt();
        System.out.println("Enter the number of customers:");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            System.out.println("Enter the account number of customer "+i+":");
            int account_number=sc.nextInt();
            System.out.println("Enter the balance at the beginning of the month:");
            double beginning_balance=sc.nextDouble();
            System.out.println("Enter the total of all items charged by the customer this month:");
            double total_charged=sc.nextDouble();
            System.out.println("Enter the total of all credits applied to the customer's account this month:");
            double total_credits=sc.nextDouble();
            double new_balance=beginning_balance+total_charged-total_credits;
            System.out.println("The new balance for account number "+account_number+" is: "+new_balance);
            if(new_balance>credit_limit)
            {
                System.out.println("Account number "+account_number+" has exceeded the credit limit.");
            }
            else
            {
                System.out.println("Account number "+account_number+" is within the credit limit.");
            }
        }
        sc.close();
    }
    
}
