/*Utopias tax accountants always use programs that compute income taxes 
even though the tax rate is a solid,never- changing 15%.Define the program 
calculate Tax which determines the tax on the gross pay. Define
calculate NetPay that determines the net pay of an employee from the number 
of hours worked. Assume an hourly rate of $12. */
import java.util.*;

public class Q5 {
    static double calculateTax(double grossPay)
    { 
        return grossPay*0.15; 
    }
    static double calculateNetPay(int hoursWorked)
    {
        double gross=hoursWorked*12; return gross-calculateTax(gross);
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter hours worked: ");
        int hours=sc.nextInt();
        System.out.println("Net Pay: "+calculateNetPay(hours));
        sc.close();
    }
}