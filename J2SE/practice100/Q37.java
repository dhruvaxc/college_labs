/*Write a program to calculate compound interest using arithmetic operators. */
import java.util.Scanner;
public class Q37 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter principal amount: ");
        double principal = sc.nextDouble();
        System.out.print("Enter annual interest rate (in %): ");
        double rate = sc.nextDouble();
        System.out.print("Enter time (in years): ");
        double time = sc.nextDouble();
        double amount = principal * Math.pow((1 + rate / 100), time);
        double compoundInterest = amount - principal;
        System.out.printf("Compound Interest: %.2f%n", compoundInterest);
        sc.close();
    }
}
